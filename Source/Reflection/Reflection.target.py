# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

import shutil

class ReflectionTarget(BuildSystem.TargetBase):
    """
    The target of reflection system.
    """

    def Configuration(self) -> None:
        """
        Config reflection system's config.
        """

        self.TargetType = BuildSystem.TargetTypeEnum.Program
        self.bBuildAllmodules = True
        self.ModulesSubFolder = ["MetaParser"]
    
        # Copy Templates to bin folder
        try:
            shutil.rmtree("./Build/Binaries/Templates")
        finally:
            shutil.copytree("./Source/Reflection/MetaParser/Templates/", "./Build/Binaries/Templates")