/**
 * Copyrigt 2025, LiserverYang. All rights reserved.
 *
 * Defined class LClassBuilder
 */

#pragma once

#include <string>
#include <memory>

#include "LClass.h"
#include "Registry.h"

namespace ReflectionSystem
{

    class RawLClassBuilder
    {
    private:
        std::unique_ptr<LClass> desc{nullptr};

    public:
        explicit RawLClassBuilder(const std::string &name) : desc(std::make_unique<LClass>())
        {
            desc->m_Name = name;
        }

        ~RawLClassBuilder()
        {
            Registry::Instance().Register(std::move(desc));
        }

        RawLClassBuilder(const RawLClassBuilder &) = delete;

        template <class Class, typename Var>
        void AddMemberVariable(const std::string &name, Var Class::*var)
        {
            MemberVariable variable(var);
            variable.m_Name = name;
            desc->m_MemberVariables.push_back(variable);
        }

        template <class Class, typename Func>
        void AddMemberFunction(const std::string &name, Func Class::*func)
        {
            MemberFunction function(func);
            function.m_Name = name;
            desc->m_MemberFunctions.push_back(function);
        }
    };

    template <class Class>
    class LClassBuilder
    {
    public:
        explicit LClassBuilder(const std::string &name) : rawBuilder(name) {}

        template <typename Var>
        LClassBuilder &AddMemberVariable(const std::string &name, Var Class::*var)
        {
            rawBuilder.AddMemberVariable(name, var);
            return *this;
        }

        template <typename Func>
        LClassBuilder &AddMemberFunction(const std::string &name, Func Class::*func)
        {
            rawBuilder.AddMemberFunction(name, func);
            return *this;
        }

    private:
        RawLClassBuilder rawBuilder;
    };

    template <class Class>
    LClassBuilder<Class> AddClass(const std::string &name)
    {
        return LClassBuilder<Class>(name);
    }

    std::vector<LClass *> Get()
    {
        return Registry::Instance().Get();
    }

    LClass &GetByName(const std::string &name)
    {
        return *Registry::Instance().Find(name);
    }

}