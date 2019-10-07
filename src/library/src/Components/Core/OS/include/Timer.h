/**
 * \file
 * \brief A simple timer class
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
#include <memory>
#include <string>

namespace ssbl {

/**
 * @class Timer
 * @brief Base class for all timers
 *
 */
class Timer {
 public:
  /**
   * @brief Construct a new Timer object
   *
   * @param periodMs period in ms
   * @param autoReload set to true if you need a periodic timer
   */
  Timer(uint32_t periodMs, bool autoReload = false);
  virtual ~Timer();

  /**
   * @brief OnTimer callback, to be implemented by derived classes
   *
   */
  virtual void OnTimer() = 0;

  /**
   * @brief Start the timer
   *
   */
  void Start();
  /**
   * @brief Stop the timer
   *
   */
  void Stop();

 private:
  // no copy
  Timer(Timer&&);
  Timer& operator=(Timer&&);

  class impl;
  std::unique_ptr<impl> pImpl_;  ///< Pointer to implementation
};

}  // namespace ssbl
