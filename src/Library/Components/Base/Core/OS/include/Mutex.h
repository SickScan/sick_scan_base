/**
 * \file
 * \brief A minimal mutex class
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
 * @class Mutex
 * @brief Mutex for synchronization
 *
 */
class Mutex {
 public:
  /**
   * @brief Construct a new recursive Mutex object
   *
   */
  Mutex();

  /**
   * @brief Destroy the Mutex object
   *
   */
  ~Mutex();

  /**
   * @brief Lock the mutex (wait forever)
   *
   * @return true if lock acquired
   * @return false
   */
  bool Lock();

  /**
   * @brief Wait to lock the mutex
   *
   * @param msTimeout timeout in ms
   * @return true if lock acquired
   * @return false
   */
  bool WaitLock(uint32_t msTimeout);
  /**
   * @brief Try to lock the mutex and return immendiatly
   *
   * @param timeout
   * @return true if lock acquired
   * @return false
   */
  bool TryLock();

  /**
   * @brief Unlock the mutex
   *
   * @return true if lock acquired
   * @return false
   */
  bool Unlock();

 private:
  // no copy
  Mutex(Mutex&&);
  Mutex& operator=(Mutex&&);
  class impl;
  std::unique_ptr<impl> pImpl_;  ///< Pointer to implementation
};

}  // namespace ssbl