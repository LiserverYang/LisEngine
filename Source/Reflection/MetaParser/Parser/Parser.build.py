# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class ParserModule(BuildSystem.ModuleBase):
    """
    Do parser build.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        Called after the function __init__.
        """

        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        self.ModulesDependOn = ["libclang", "Reflection", "Mustache"]