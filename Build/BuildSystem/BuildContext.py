# Copyright 2025, LiserverYang. All rights reserved.

from .ModuleBase import ModuleBase
from .TargetBase import TargetBase

class TBuildContext:
    """
    Has all data when building.
    """

    BuildOrder: list[str] = []
    ModulePath: list[str] = []
    SkipedModule: list[bool] = []
    BuildedModule: list[bool] = []
    ModuleConfiguration: list[ModuleBase] = []
    TargetConfiguration: TargetBase = TargetBase()
    TargetName: str = ""

BuildContext: TBuildContext = TBuildContext()