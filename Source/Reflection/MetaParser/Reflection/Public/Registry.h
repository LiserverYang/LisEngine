/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Registry
 */

#pragma once

#include <memory>
#include <unordered_map>

#include "LClass.h"

namespace ReflectionSystem
{

    class Registry
    {
    private:
        std::unordered_map<std::string, std::unique_ptr<LClass>> m_ReflectionMap;

    public:
        static Registry &Instance()
        {
            static Registry m_Instance;

            return m_Instance;
        }

        void Register(std::unique_ptr<LClass> Class);
        LClass *Find(const std::string &Name) const;
        std::vector<LClass *> Get();
        void Clear();
    };

}