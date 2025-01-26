/*
 * Copyright 2025, LiserverYang. All rights reserved.
 */

#include "FormatedString.h"
#include <stdarg.h>

int CountPlaceholders(const std::string &str)
{
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find("${", pos)) != std::string::npos)
    {
        size_t end = str.find("}", pos);

        if (end != std::string::npos)
            ++count, pos = end + 1;
        else
            break;
    }

    return count;
}

FormatedString::FormatedString(const char *String, size_t len) : m_String(String)
{
    m_NumArgs = CountPlaceholders(String);
}

FormatedString::FormatedString(std::string String) : m_String(String)
{
    m_NumArgs = CountPlaceholders(String);
}

FormatedString FormatedString::ReplaceArguments(...)
{
    va_list args;
    va_start(args, m_NumArgs);

    std::string result = m_String;

    for (int i = 0; i < m_NumArgs; ++i)
    {
        std::string placeholder = "${" + std::to_string(i) + "}";
        std::string value = va_arg(args, const char *);
        size_t pos = result.find(placeholder);
        while (pos != std::string::npos)
        {
            result.replace(pos, placeholder.length(), value);
            pos = result.find(placeholder);
        }
    }

    va_end(args);
    m_String = result;

    return *this;
}

const char *FormatedString::GenericCharPointer()
{
    return m_String.c_str();
}

std::string FormatedString::GenericString()
{
    return m_String;
}

FormatedString operator"" f(const char *String, size_t len)
{
    return FormatedString(String);
}