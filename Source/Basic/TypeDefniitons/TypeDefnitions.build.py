# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class TypeDefnitionsModule(BuildSystem.ModuleBase):
    """
    Build type defnitions.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib