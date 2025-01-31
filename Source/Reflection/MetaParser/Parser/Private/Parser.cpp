/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Parser.
 */

#include "Parser.h"
#include "Arguments.h"

#include <iostream>
#include <string>
#include <vector>

#include "clang-c/Index.h"
#include <iomanip>

#include <MetaData.h>
#include <unordered_map>

#include "Mustache.hpp"
#include <fstream>

using namespace kainjow::mustache;

std::string ReadMustache(std::string FilePath)
{
    std::ifstream file(FilePath);
    std::stringstream ss;

    if (file.bad())
    {
        std::cerr << "Cannot open file " + FilePath;
    }

    ss << file.rdbuf();

    file.close();

    return ss.str();
}

void WriteToFile(std::string FilePath, std::string Str)
{
    std::ofstream file(FilePath);

    file << Str;
    file.close();
}

std::string GetClangString(const CXString &str)
{
    std::string c_str = clang_getCString(str);
    clang_disposeString(str);
    return c_str;
}

int ReflectionSystem::MetaParser::Parse(Arguments arguments)
{
    std::vector<const char *> parser_arguments = {
        "-std=c++17",
        "-D __clang__",
        "-D __REFLECTION_META_PARSER__"};

    auto index = clang_createIndex(0, 0);
    CXTranslationUnit translator{};
    CXErrorCode errcode = clang_parseTranslationUnit2(
        index, arguments.m_FilePath.c_str(), parser_arguments.data(), (int)parser_arguments.size(), nullptr, 0, CXTranslationUnit_None, &translator);

    if (errcode != 0)
        throw std::runtime_error("Failed to parse translation unit, error code is: " + std::to_string((int)(errcode)));

    auto rootCursor = clang_getTranslationUnitCursor(translator);

    auto childVisitor = [](CXCursor cursor, CXCursor parent, CXClientData data)
    {
        auto cursors = reinterpret_cast<std::vector<CXCursor> *>(data);

        if (clang_getCursorKind(cursor) == CXCursor_AnnotateAttr)
        {
            if (GetClangString(clang_getCursorSpelling(cursor)) == "reflect-class")
            {
                cursors->push_back(parent);
            }
        }

        return CXChildVisit_Recurse;
    };

    std::vector<CXCursor> metaCursors;
    clang_visitChildren(rootCursor, childVisitor, reinterpret_cast<CXClientData>(&metaCursors));

    std::unordered_map<std::string, std::vector<MetaData>> metaData;

    for (auto &cursor : metaCursors)
    {
        auto visitor = [](CXCursor cursor, CXCursor parent, CXClientData data)
        {
            auto rawData = reinterpret_cast<std::vector<MetaData> *>(data);

            if (clang_getCursorKind(cursor) == CXCursor_AnnotateAttr)
            {
                MetaData meta;

                if (clang_getCursorKind(parent) == CXCursor_FieldDecl)
                    meta.key = "field";
                else if (clang_getCursorKind(parent) == CXCursor_CXXMethod)
                    meta.key = "method";
                else
                    return CXChildVisit_Recurse;

                meta.value = GetClangString(clang_getCursorSpelling(parent));

                rawData->push_back(meta);
            }

            return CXChildVisit_Recurse;
        };

        std::vector<MetaData> data;
        clang_visitChildren(cursor, visitor, reinterpret_cast<CXClientData>(&data));

        metaData[GetClangString(clang_getCursorSpelling(cursor))] = data;
    }

    mustache ReflectionCppMustache{ReadMustache("./Templates/ComponentClass.cpp.mustache")};
    mustache ReflectionHMustache{ReadMustache("./Templates/ComponentClass.h.mustache")};

    for (auto &[key, value] : metaData)
    {
        data Fields = data::type::list;
        data Functions = data::type::list;

        for (auto it : value)
        {
            if (it.key == "field")
            {
                data Field;
                Field.set("FieldName", it.value);
                Fields.push_back(Field);
            }
            else
            {
                data Function;
                Function.set("FunctionName", it.value);
                Functions.push_back(Function);
            }
        }

        data data;
        data.set("Fields", Fields);
        data.set("Functions", Functions);
        data.set("ClassName", key);

        WriteToFile(arguments.m_GenericReflectionFilePath + "/" + key + ".gen.cpp", ReflectionCppMustache.render(data));
        WriteToFile(arguments.m_GenericReflectionFilePath + "/" + key + ".gen.h", ReflectionHMustache.render(data));
    }

    clang_disposeTranslationUnit(translator);
    clang_disposeIndex(index);

    return 0;
}
