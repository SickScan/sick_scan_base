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

#pragma once
#include <string>
#include "Core/OS/include/Mutex.h"

namespace ssbl {

enum LogLevel { LVL_DEBUG, LVL_INFO, LVL_WARNING, LVL_ERROR, LVL_OFF };

/**
 * @class Logger
 * @brief Logger class
 *
 */
class Logger {
 public:
  /**
   * @brief Construct a new Logger object
   *
   * @param logName a name for the logger
   * @param minLvl only messages >= minLvl will be displayed
   */
  Logger(std::string& logName, LogLevel minLvl = LVL_INFO);

  /**
   * @brief Destroy the Logger object
   *
   */
  ~Logger(){};

  /**
   * @brief Log a message
   *
   * @param level the log level
   * @param szMessage the message to be logged
   * @param ... variadic
   */
  virtual void Log(LogLevel level, const char* szMessage, ...);

  /**
   * @brief Set the log level
   *
   * @param lvl
   */
  virtual void SetLoglevel(LogLevel lvl) { MinLogLvl_ = lvl; };

 private:
  std::string LoggerName_;
  LogLevel MinLogLvl_;
  Mutex LogMutex_;
};

//! \brief mhh jaa, a global logger object
extern Logger SSBLLogger;

}  // namespace ssbl

//! \brief Log a message
#define SSBL_LOG(loglevel, ...) (ssbl::SSBLLogger).Log(loglevel, __VA_ARGS__)

//! \brief Log a debug message
#define SSBL_LOG_DEBUG(...) SSBL_LOG(ssbl::LogLevel::LVL_DEBUG, __VA_ARGS__)
//! \brief Log a info message
#define SSBL_LOG_INFO(...) SSBL_LOG(ssbl::LogLevel::LVL_INFO, __VA_ARGS__)
//! \brief Log a warning message
#define SSBL_LOG_WARNING(...) SSBL_LOG(ssbl::LogLevel::LVL_WARNING, __VA_ARGS__)
//! \brief Log a error message
#define SSBL_LOG_ERROR(...) SSBL_LOG(ssbl::LogLevel::LVL_ERROR, __VA_ARGS__)
