# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class EditorTarget(BuildSystem.TargetBase):
    """
    The target of editor.
    """

    def Configuration(self) -> None:
        """
        Config editor's config.
        """

        self.TargetType = BuildSystem.TargetTypeEnum.Program
        self.bBuildAllmodules = True
        self.ModulesSubFolder = ["Runtime", "Editor", "Basic", "ThirdParty", "Runtime/Core", "Runtime/Function", "Runtime/Resource", "Runtime/Platform"]

        # Check vulkan sdk
        if not BuildSystem.FileIO(BuildSystem.Config.VulkanConfig.VulkanSDKPosition).Exits:
            BuildSystem.Logger.Log(BuildSystem.LogLevelEnum.Error, "Could not find vulkan stk, please edit Build/BuildSystem/Config/VulkanConfig.py", True, -1)

        match BuildSystem.BuildContext.BuildType:
            case BuildSystem.BuildTypeEnum.Release:
                self.ArgumentsAdded = ["-O3", "-D__RELEASE__"]
            case BuildSystem.BuildTypeEnum.Debug:
                self.ArgumentsAdded = ["-O0", "-g", "-D__DEBUG__"]
            case BuildSystem.BuildTypeEnum.Development:
                # Developemt is also a kind of debug
                self.ArgumentsAdded = ["-O1", "-g", "-D__DEBUG__"]