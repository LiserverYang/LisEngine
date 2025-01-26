/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Editor.
 */

#pragma once

#include "Engine.h"
#include "EditorUI.h"

class Editor
{
private:
    Engine* m_LisEngineRuntime;
    EditorUI *m_LisEngineEditorUI;

public:
    Editor(Engine *LisEngineRuntime) : m_LisEngineRuntime(LisEngineRuntime) {}

    void Init();
    void Run();
    void Clean();
};