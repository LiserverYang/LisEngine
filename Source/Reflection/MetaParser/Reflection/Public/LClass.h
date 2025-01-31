/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class LClass.
 */

#pragma once

#include <string>
#include <vector>

#include "LClassMembers.h"

namespace ReflectionSystem
{

    class LClass
    {
        friend class RawLClassBuilder;

    private:
        std::string m_Name;

        std::vector<MemberVariable> m_MemberVariables;
        std::vector<MemberFunction> m_MemberFunctions;

    public:
        const std::string &GetName() const;
        const std::vector<MemberVariable> &GetMemberVariables() const;
        const std::vector<MemberFunction> &GetMemberFunctions() const;

        MemberVariable GetMemberVariable(const std::string &Name) const;
        MemberFunction GetMemberFunction(const std::string &Name) const;
    };

}