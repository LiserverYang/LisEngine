# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class ReflectionAPIModule(BuildSystem.ModuleBase):
    """
    Pydoc
    """

    def Configuration(self) -> None:
        """
        Pydoc
        """
        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.AutoSkiped = True
        self.LinkThisModule = False