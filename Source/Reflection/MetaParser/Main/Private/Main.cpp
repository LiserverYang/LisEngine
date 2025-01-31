/*
 * Copyright 2025, LiserverYang. All rights reserved.
 */

#include <iostream>
#include "Arguments.h"
#include "Parser.h"

/*
 * The reflection system's entry point.
 */
int main(int argc, const char **argv)
{
    // Check arguments
    if (argc != Arguments::ARGUMENTS_LENGTH)
    {
        std::cerr << "Illegal arguments.";

        return -1;
    }

    Arguments arguments;

    // Set arguments
    arguments.m_FilePath = argv[1];
    arguments.m_GenericReflectionFilePath = argv[2];
    arguments.m_GenericSerializationFilePath = argv[3];

    // Call parser
    ReflectionSystem::MetaParser Parser {};

    return Parser.Parse(arguments);
}