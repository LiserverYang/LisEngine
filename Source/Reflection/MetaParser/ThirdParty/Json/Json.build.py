# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class JsonModule(BuildSystem.ModuleBase):
    """
    Build engine class.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.AutoSkiped = True
        self.LinkThisModule = False