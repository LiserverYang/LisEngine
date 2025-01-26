# Copyright 2025, LiserverYang. All rights reserved.

from .FileSystem import FileIO
from .Logger import Logger
from .LogLevelEnum import LogLevelEnum
from .BuildTarget import BuildTarget
from .Functions import GetAllUnits

import sys

def BuildEngine(SourceFolder: FileIO) -> None:
    """
    Build the engine
    """

    # Do some checks
    if not SourceFolder.Exits():
        Logger.Log(LogLevelEnum.Error, "Could not found Source folder, please check your engine source.", True, -1)

    if not SourceFolder.IsFolder():
        Logger.Log(LogLevelEnum.Error, "The source is not a folder, please check your engine source.", True, -1)

    Logger.Log(LogLevelEnum.Info, f"Python version {sys.version}")

    Logger.Log(LogLevelEnum.Info, "Reading all targets.")

    # Get all targets we need
    TargetList: list[str] = GetAllUnits(SourceFolder, "target")

    Logger.Log(LogLevelEnum.Info, "Found target: " + ", ".join(TargetList))

    # Build targets
    for TargetPathStr in TargetList:
        BuildTarget(FileIO(TargetPathStr))