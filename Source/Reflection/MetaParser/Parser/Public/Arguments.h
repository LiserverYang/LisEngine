/*
 * Copyright 2025, LiserverYang. All rights reserved.
 * 
 * Defined class Arguments.
 */

#pragma once

#include <string>

class Arguments
{
public:
    std::string m_FilePath                     = "";
    std::string m_GenericReflectionFilePath    = "";
    std::string m_GenericSerializationFilePath = "";

    Arguments() = default;

    static const int ARGUMENTS_LENGTH = 4;
};