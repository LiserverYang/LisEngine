/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Windows system's entry point.
 */

#include <windows.h>
#include "Main.h"

/*
 * Windows main function.
 * See https://learn.microsoft.com/zh-cn/windows/win32/api/winbase/nf-winbase-winmain
 */
int WINAPI WinMain(_In_ HINSTANCE hInst, _In_opt_ HINSTANCE hInstPrev, _In_ PSTR cmdline, _In_ int cmdshow)
{
    LaunchMain(cmdline);

    return 0;
}