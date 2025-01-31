# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class ReflectionModule(BuildSystem.ModuleBase):
    """
    Do reflection build.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib