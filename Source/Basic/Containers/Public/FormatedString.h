/*
 * Copyright 2025, LiserverYang. All rights reserved.
 */

#include <string>

/*
 * FormatedString, format a string and give the end.
 * Example: ("${0}+${1}=${2}"f).ReplaceArguments("1", "1", "2").GenericString() = "1+1=2"
 */
class FormatedString
{
private:
    std::string m_String;
    int m_NumArgs;

public:
    FormatedString(const char *String, size_t len);
    FormatedString(std::string String);

    FormatedString ReplaceArguments(...);

    const char *GenericCharPointer();
    std::string GenericString();
};

/*
 * User-defined literal, return FormatedString.
 */
FormatedString operator""f(const char *String, size_t len);