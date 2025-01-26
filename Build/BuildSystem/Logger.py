# Copyright 2025, LiserverYang. All rights reserved.

import time
from . import LogLevelEnum

class TLogger:
    """
    The logger, includes function log.
    """

    def Log(self, LogLevel: LogLevelEnum, Msg: str, bExit: bool = False, ExitCode: int = 1):
        """
        Output log.
        """

        OutputStr: str = "${TIME} [${LEVEL}]: ${MSG}"
        LevelMarco: str = "${LEVEL}"
        TimeMarco: str = "${TIME}"
        MsgMarco: str = "${MSG}"

        match LogLevel:
            case LogLevelEnum.Info:
                OutputStr = OutputStr.replace(LevelMarco, "Info")
            case LogLevelEnum.Warning:
                OutputStr = OutputStr.replace(LevelMarco, "Warning")
            case LogLevelEnum.Error:
                OutputStr = OutputStr.replace(LevelMarco, "Error")

        OutputStr = OutputStr.replace(TimeMarco, time.strftime('%Y-%m-%d %H:%M:%S', time.localtime()))
        OutputStr = OutputStr.replace(MsgMarco, Msg)

        print(OutputStr)

        if bExit:
            exit(ExitCode)

Logger = TLogger()