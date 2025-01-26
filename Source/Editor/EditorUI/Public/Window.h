/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Window.
 */

#pragma once

#include "string"
#include "imgui.h"

class Window
{
public:
    Window() = default;
    ~Window() = default;

    virtual void Draw() {}
    virtual const std::string WindowName() { return ""; }
    virtual const ImGuiWindowFlags Flags() { return 0;  }
};