/*
 * Copyright 2025, LiserverYang. All rights reserved.
 */

#include <iostream>

const int ARGUMENTS_LENGTH = 4;

/*
 * The reflection system's entry point.
 */
int main(int argc, const char **argv)
{
    // Check arguments

    if (argc != ARGUMENTS_LENGTH)
    {
        std::cerr << "Illegal arguments.";

        return -1;
    }

        

    // Default return value
    return 0;
}