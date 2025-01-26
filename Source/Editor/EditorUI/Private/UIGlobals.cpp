/*
 * Copyright 2025, LiserverYang. All rights reserved.
 *
 * Inited all ui globals.
 */

#include "UIGlobals.h"

VkAllocationCallbacks *g_Allocator = nullptr;
VkInstance g_Instance = VK_NULL_HANDLE;
VkPhysicalDevice g_PhysicalDevice = VK_NULL_HANDLE;
VkDevice g_Device = VK_NULL_HANDLE;
uint32_t g_QueueFamily = (uint32_t)-1;
VkQueue g_Queue = VK_NULL_HANDLE;
VkDebugReportCallbackEXT g_DebugReport = VK_NULL_HANDLE;
VkPipelineCache g_PipelineCache = VK_NULL_HANDLE;
VkDescriptorPool g_DescriptorPool = VK_NULL_HANDLE;

ImGui_ImplVulkanH_Window g_MainWindowData;
uint32_t g_MinImageCount = 2;
bool g_SwapChainRebuild = false;

SDL_WindowFlags window_flags;
SDL_Window *window;
ImGui_ImplVulkanH_Window *wd;

bool ShouldExitWindow = false;
ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

std::vector<Window *> g_Windows = {};