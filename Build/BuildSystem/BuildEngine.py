# Copyright 2025, LiserverYang. All rights reserved.

from .FileSystem import FileIO
from .Logger import Logger
from .LogLevelEnum import LogLevelEnum
from .BuildTarget import BuildTarget
from .Functions import GetAllUnits
from .GenericJson import GenericJson
from .BuildContext import BuildContext
from .TimeSolver import FormatDuration

import sys
import time


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

    # Start timing
    StartTime = time.time()

    # Get all targets we need
    TargetList: list[str] = GetAllUnits(SourceFolder, "target")

    Logger.Log(LogLevelEnum.Info, "Found target: " + ", ".join(TargetList))

    BuildTarget(FileIO(TargetList[1]))
    BuildTarget(FileIO(TargetList[0]))

    # For clangd, we generic some files
    GenericJson(BuildContext.CompileCommands)

    Logger.Log(LogLevelEnum.Info, f"Build done. Use time toal: {FormatDuration(time.time() - StartTime)}")