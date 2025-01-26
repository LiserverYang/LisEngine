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

        self.TargetType = BuildSystem.TargetTypeEnum.Editor
        self.bBuildAllmodules = True
        self.ModulesSubFolder = ["Runtime", "Editor", "Basic", "ThirdParty", "Runtime/Core", "Runtime/Function", "Runtime/Resource", "Runtime/Platform"]

        # Check vulkan sdk
        if not BuildSystem.FileIO(BuildSystem.Config.VulkanConfig.VulkanSDKPosition).Exits:
            BuildSystem.Logger.Log(BuildSystem.LogLevelEnum.Error, "Could not find vulkan stk, please edit Build/BuildSystem/Config/VulkanConfig.py", True, -1)

        self.ArgumentsAdded = [f"-L{BuildSystem.Config.VulkanConfig.VulkanSDKPosition}/Bin -L{BuildSystem.Config.VulkanConfig.VulkanSDKPosition}/Lib", "-g"]