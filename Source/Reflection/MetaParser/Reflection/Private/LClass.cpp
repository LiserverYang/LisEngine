/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class LClass.
 */

#include <string>
#include <vector>

#include "LClass.h"

namespace ReflectionSystem
{
    const std::string &LClass::GetName() const
    {
        return m_Name;
    }

    const std::vector<MemberVariable> &LClass::GetMemberVariables() const
    {
        return m_MemberVariables;
    }

    const std::vector<MemberFunction> &LClass::GetMemberFunctions() const
    {
        return m_MemberFunctions;
    }

    MemberVariable LClass::GetMemberVariable(const std::string &Name) const
    {
        for (auto &it : m_MemberVariables)
        {
            if (it.GetName() == Name)
            {
                return it;
            }
        }

        return MemberVariable{};
    }

    MemberFunction LClass::GetMemberFunction(const std::string &Name) const
    {
        for (auto &it : m_MemberFunctions)
        {
            if (it.GetName() == Name)
            {
                return it;
            }
        }

        return MemberFunction{};
    }
}