/*
 * Copyright 2025, LiserverYang. All right reserved.
 *
 * Variable Logger and class TLogger.
 */

#include "FormatedString.h"
#include "LogLevelEnum.h"
#include <string>
#include <iostream>

/*
 * There's no reflection so we can only do this :_:
 */
std::string LogLevelEnumToString(LogLevelEnum LogLevel)
{
    switch (LogLevel)
    {
        case LogLevelEnum::Info:
            return "Info";
        case LogLevelEnum::Warn:
            return "Warn";
        case LogLevelEnum::Error:
            return "Error";
    }
}

/*
 * The class of logger, only one instance (Shuld keep it).
 */
class TLogger
{
private:

public:

    void Log(LogLevelEnum LogLevel, std::string Msg, bool Exit = false, int ExitValue = -1)
    {
        std::string LogMsg = "${0} [${1}]: ${2}"f.ReplaceArguments("Test", "").GenericString();

        if (LogLevel == LogLevelEnum::Error)
        {
            std::cerr << LogMsg;
        }
        else
        {
            std::cout << LogMsg;
        }

        // Also update to the logging buffer.
        
    }


};