/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined class Editor.
 */

#include "Editor.h"
#include "EditorUI.h"
#include "UIGlobals.h"

void Editor::Init()
{
    m_LisEngineEditorUI = new EditorUI();

    m_LisEngineEditorUI->Init();
}

void Editor::Run()
{
    while (!ShouldExitWindow)
    {
        // Tick engine

        // tick ui
        if (m_LisEngineEditorUI->FrameBegin())
            continue;
        
        m_LisEngineEditorUI->Draw();

        ImGui::ShowDemoWindow();

        m_LisEngineEditorUI->FrameEnd();
    }
}

void Editor::Clean()
{
}
