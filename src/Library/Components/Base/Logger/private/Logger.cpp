/**
 * \file
 * \brief Trivial logger and log macro definitions
 *
 * Copyright 2019, SICK AG, Waldkirch
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "Base/Logger/include/Logger.h"
#include <stdio.h>
#include <cstdarg>
#include <string>
#include "Base/Core/OS/include/Time.h"
#include "Base/Types/include/BasicTypes.h"

#ifdef __ZEPHYR__
#include <zephyr.h>
#endif
namespace ssbl {

#if __GNUC__
__attribute__((weak)) void printlog(LogLevel level, const char *szMessage)
#else
void printlog(LogLevel level, const char *szMessage)
#endif
{
  SSBL_UNUSED(level);
#ifdef __ZEPHYR__
  printk("%s", szMessage);
#else
  printf("%s", szMessage);
#endif
}

Logger::Logger(std::string &logName, LogLevel minLvl)
    : LoggerName_(logName),
      MinLogLvl_(minLvl){

      };

void Logger::Log(LogLevel level, const char *szMessage, ...) {
  struct timespec now = SSBL_GetTimestamp();

  char buffer[512];

  int written;

  if (level >= MinLogLvl_) {
    LogMutex_.Lock();
    written = sprintf(
        buffer, "[%02d:%02d:%02d.%03d] ", (int32_t)((now.tv_sec / 3600) % 24),
        (int32_t)((now.tv_sec / 60) % 60), (int32_t)((now.tv_sec) % 60),
        (int32_t)((now.tv_nsec) / 1000000));

    switch (level) {
      case LVL_DEBUG:
        written += sprintf(&buffer[written], "%s DEBUG: ", LoggerName_.c_str());
        break;
      case LVL_INFO:
        written += sprintf(&buffer[written], "%s INFO: ", LoggerName_.c_str());
        break;
      case LVL_WARNING:
        written +=
            sprintf(&buffer[written], "%s WARNING: ", LoggerName_.c_str());
        break;
      case LVL_ERROR:
        written += sprintf(&buffer[written], "%s ERROR: ", LoggerName_.c_str());
        break;
      default:
        break;
    }
    std::va_list va;
    va_start(va, szMessage);
    written += vsprintf(&buffer[written], szMessage, va);
    written += sprintf(&buffer[written], "\n");
    va_end(va);
    printlog(level, buffer);

    LogMutex_.Unlock();
  }
}

std::string SSBL_LOGGER_NAME("SSBL");
Logger SSBLLogger(SSBL_LOGGER_NAME, LVL_INFO);

}  // namespace ssbl
