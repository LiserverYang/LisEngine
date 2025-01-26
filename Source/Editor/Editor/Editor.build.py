# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class EditorModule(BuildSystem.ModuleBase):
    """
    Build editor.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.ModulesDependOn = ["Containers", "ImGUI", "SDL3", "VulkanSDK", "Engine", "EditorUI"]
        self.ArgumentsAdded = ["-lvulkan-1"]