/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Windows system's entry point.
 * Windows 系统的入口点文件，处理一切与 Windows 有关的事情并调用 LaunchMain
 */

#include "Main.h"
#include <windows.h>

/*
 * Windows main function.
 * See https://learn.microsoft.com/zh-cn/windows/win32/api/winbase/nf-winbase-winmain
 *
 * Windows 平台下的主函数
 * 参阅https://learn.microsoft.com/zh-cn/windows/win32/api/winbase/nf-winbase-winmain
 */
int WINAPI WinMain(_In_ HINSTANCE hInst, _In_opt_ HINSTANCE hInstPrev, _In_ PSTR cmdline, _In_ int cmdshow)
{
    LaunchMain(cmdline);

    return 0;
}