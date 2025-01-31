/**
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Registry
 */

#include <memory>
#include <unordered_map>

#include "Registry.h"

namespace ReflectionSystem
{
    void Registry::Register(std::unique_ptr<LClass> Class)
    {
        m_ReflectionMap[Class->GetName()] = std::move(Class);
    }

    LClass *Registry::Find(const std::string &Name) const
    {
        return m_ReflectionMap.find(Name)->second.get();
    }

    void Registry::Clear()
    {
        m_ReflectionMap.clear();
    }

    std::vector<LClass *> Registry::Get()
    {
        std::vector<LClass *> tmp;

        for (auto &it : m_ReflectionMap)
        {
            tmp.push_back(it.second.get());
        }

        return tmp;
    }

}