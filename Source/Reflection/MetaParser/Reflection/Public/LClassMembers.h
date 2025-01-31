/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class MemberVariable and MemberFunction
 */

#pragma once

#include <any>
#include <string>
#include <functional>
#include <stdexcept>

namespace ReflectionSystem
{

    class MemberVariable
    {
        friend class RawLClassBuilder;

    private:
        std::string m_Name;

        std::function<std::any(std::any)> getter{nullptr};
        std::function<void(std::any, std::any)> setter{nullptr};

    public:
        MemberVariable() = default;

        template <class Class, typename Var>
        MemberVariable(Var Class::*var)
        {
            getter = [var](std::any obj) -> std::any
            {
                return std::any_cast<const Class *>(obj)->*var;
            };

            setter = [var](std::any obj, std::any val)
            {
                auto *self = std::any_cast<Class *>(obj);
                self->*var = std::any_cast<Var>(val);
            };
        }

        const std::string &GetName() const
        {
            return m_Name;
        }

        template <typename Var, class Class>
        Var GetValue(const Class &obj) const
        {
            return std::any_cast<Var>(getter(&obj));
        }

        template <typename Var, class Class>
        void SetValue(Class &obj, Var value)
        {
            setter(&obj, value);
        }
    };

    class MemberFunction
    {
        friend class RawLClassBuilder;

    private:
        std::string m_Name;

        std::function<std::any(std::any)> function;
        bool IsConst = false;

    public:
        MemberFunction() = default;

        template <typename C, typename R, typename... Args>
        explicit MemberFunction(R (C::*func)(Args...))
        {
            function = [this, func](std::any obj_args) -> std::any
            {
                using tuple_t = std::tuple<C &, Args...>;
                // How to debug compile-time types...
                // static_assert(std::is_same<tuple_t, void>::value, "Hoi!");
                auto *tp_ptr = std::any_cast<tuple_t *>(obj_args);
                return std::apply(func, *tp_ptr);
            };
        }

        template <typename C, typename... Args>
        explicit MemberFunction(void (C::*func)(Args...))
        {
            function = [this, func](std::any obj_args) -> std::any
            {
                using tuple_t = std::tuple<C &, Args...>;
                auto *tp_ptr = std::any_cast<tuple_t *>(obj_args);
                std::apply(func, *tp_ptr);
                return std::any{};
            };
        }

        template <typename C, typename R, typename... Args>
        explicit MemberFunction(R (C::*func)(Args...) const)
        {
            function = [this, func](std::any obj_args) -> std::any
            {
                using tuple_t = std::tuple<const C &, Args...>;
                // How to debug compile-time types...
                // static_assert(std::is_same<tuple_t, void>::value, "Hoi!");
                auto *tp_ptr = std::any_cast<tuple_t *>(obj_args);
                return std::apply(func, *tp_ptr);
            };
            IsConst = true;
        }

        template <typename C, typename... Args>
        explicit MemberFunction(void (C::*func)(Args...) const)
        {
            function = [this, func](std::any obj_args) -> std::any
            {
                using tuple_t = std::tuple<const C &, Args...>;
                auto *tp_ptr = std::any_cast<tuple_t *>(obj_args);
                std::apply(func, *tp_ptr);
                return std::any{};
            };
            IsConst = true;
        }

        template <class Class, typename... Args>
        std::any Invoke(Class &obj, Args &&...args)
        {
            if (IsConst)
            {
                auto tp = std::make_tuple(std::reference_wrapper<const Class>(obj), args...);
                return function(&tp);
            }
            auto tp = std::make_tuple(std::reference_wrapper<Class>(obj), args...);
            return function(&tp);
        }

        const std::string &GetName() const
        {
            return m_Name;
        }
    };

}