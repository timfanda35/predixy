/*
 * predixy - A high performance and full features proxy for redis.
 * Copyright (C) 2017 Joyield, Inc. <joyield.com@gmail.com>
 * All rights reserved.
 */

#ifndef _PREDIXY_BACKTRACE_H_
#define _PREDIXY_BACKTRACE_H_

#include "Logger.h"

inline void traceInfo()
{
    logError("predixy backtrace, but current system unspport backtrace");
}

#endif
