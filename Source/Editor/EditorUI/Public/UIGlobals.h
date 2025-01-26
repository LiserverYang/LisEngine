/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Defined all ui globals.
 */

#pragma once

#include "EditorUI.h"
#include "Window.h"

extern VkAllocationCallbacks *g_Allocator;
extern VkInstance g_Instance;
extern VkPhysicalDevice g_PhysicalDevice;
extern VkDevice g_Device;
extern uint32_t g_QueueFamily;
extern VkQueue g_Queue;
extern VkDebugReportCallbackEXT g_DebugReport;
extern VkPipelineCache g_PipelineCache;
extern VkDescriptorPool g_DescriptorPool;
extern ImGui_ImplVulkanH_Window g_MainWindowData;
extern uint32_t g_MinImageCount;
extern bool g_SwapChainRebuild;

extern SDL_WindowFlags window_flags;
extern SDL_Window *window;
extern ImGui_ImplVulkanH_Window *wd;

extern bool ShouldExitWindow;
extern ImVec4 clear_color;

extern std::vector<Window *> g_Windows;