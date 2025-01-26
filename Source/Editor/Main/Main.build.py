# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class MainModule(BuildSystem.ModuleBase):
    """
    Build entry point.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.EntryPoint
        self.ModulesDependOn = ["Containers", "ImGUI", "SDL3", "VulkanSDK", "Editor", "Engine", "EditorUI"]
        self.ArgumentsAdded = ["-lvulkan-1", "./Source/Editor/Main/Resource/ICON.o"]