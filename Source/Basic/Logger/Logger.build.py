# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class LoggerModule(BuildSystem.ModuleBase):
    """
    Build logging system.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        """

        self.bBuildThisModule = True
        self.BinaryType = BuildSystem.BinaryTypeEnum.DynamicLib
        
