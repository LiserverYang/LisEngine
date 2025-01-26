/**
 * Copyright 2025, LiserverYang. All rights reserved.
 * 
 * This engine's entry point.
 */

#include "Engine.h"
#include "Editor.h"

void LaunchMain(char *CmdLine)
{
    Engine *LisEngine = new Engine();
    LisEngine->Init();

    Editor *LisEngineEditor = new Editor(LisEngine);
    LisEngineEditor->Init();

    LisEngineEditor->Run();

    LisEngineEditor->Clean();
    LisEngine->Clean();
}