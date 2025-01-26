/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined all editor windows.
 */

#pragma once

#include "Window.h"

class HierarchyWindow : public Window
{
public:
    virtual const std::string WindowName() override
    {
        return "Hierarchy";
    }

    virtual void Draw() override;
};

class ProjectWindow : public Window
{
public:
    virtual const std::string WindowName() override
    {
        return "Project";
    }

    virtual void Draw() override;
};

class PropertiesWindow : public Window
{
public:
    virtual const std::string WindowName() override
    {
        return "Properties";
    }

    virtual void Draw() override;
};

class ViewWindow : public Window
{
public:
    virtual const std::string WindowName() override
    {
        return "View";
    }

    virtual void Draw() override;
};

class LogWindow : public Window
{
public:
    virtual const std::string WindowName() override
    {
        return "Log";
    }

    virtual void Draw() override;
};