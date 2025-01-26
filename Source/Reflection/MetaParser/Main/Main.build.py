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
        self.ArgumentsAdded = ["./Source/Reflection/MetaParser/Main/Resource/ICON.o"]
        self.ModulesDependOn = ["libclang"]