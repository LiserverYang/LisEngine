/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class EditorUI.
 */

#pragma once

#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_vulkan.h"
#include <stdio.h>  // printf, fprintf
#include <stdlib.h> // abort
#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <string>
#include <vector>

#ifdef __EMSCRIPTEN__
#include "../libs/emscripten/emscripten_mainloop_stub.h"
#endif

#include "Window.h"

class EditorUI
{
public:
    EditorUI() = default;
    ~EditorUI() = default;

    /*
     * Init the editor ui.
     */
    void Init();

    /*
     * Draw imgui ui.
     */
    void Draw();

    /*
     * Do some things at the beginning of a frame, return if should skip this framme.
     */
    bool FrameBegin();

    /*
     * Do some things at the end of a frame.
     */
    void FrameEnd();

    /*
     * Clean up when exit.
     */
    void CleanUp();

    /*
     * Regist a window to editor.
     */
    void RegistWindow(Window *window);
};