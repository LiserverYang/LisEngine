# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class ImGUIModule(BuildSystem.ModuleBase):
    """
    Build ImGUI module.
    """

    def Configuration(self) -> None:
        """
        Config all things
        """

        self.bBuildThisModule = True
        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.ModulesDependOn = ["SDL3", "VulkanSDK"]
        self.ArgumentsAdded = ["-lvulkan-1"]