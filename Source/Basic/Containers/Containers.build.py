# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class ContainersModule(BuildSystem.ModuleBase):
    """
    Build containers.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.ModulesDependOn = ["TypeDefnitions"]