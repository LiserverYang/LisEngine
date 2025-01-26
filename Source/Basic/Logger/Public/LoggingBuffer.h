/*
 * Copyright 2025, LiserverYang. All right reserved.
 *
 * Defined class LoggingBuffer.
 */

#pragma once

#include <vector>
#include <string>
#include "LogLevelEnum.h"

class LoggingBuffer
{
private:
    std::vector<std::string> m_MsgData;
    std::vector<LogLevelEnum> m_LevelData;

public:
    LoggingBuffer() = default;
    ~LoggingBuffer() = default;

    void AddLogData(LogLevelEnum Level, std::string Msg)
    {
        m_LevelData.push_back(Level);
        m_MsgData.push_back(Msg);
    }
};
