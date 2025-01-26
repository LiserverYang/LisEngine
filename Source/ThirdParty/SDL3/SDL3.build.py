# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class SDL3Module(BuildSystem.ModuleBase):
    """
    Build SDL3 module.
    """

    def Configuration(self) -> None:
        """
        Config all things
        """

        self.bBuildThisModule = True
        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.AutoSkiped = True