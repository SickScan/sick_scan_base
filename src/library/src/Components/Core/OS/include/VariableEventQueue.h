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
#include <list>
#include <memory>
#include <string>
#include <vector>
#include "Core/Sensor/include/Common/SickSensorVariable.h"

namespace ssbl {

/**
 * @class VariableEventQueue
 * @brief An event queue for variable events
 *
 */
class VariableEventQueue {
 public:
  /**
   * @brief Construct a new Variable Event Queue object
   *
   * @param rVar the variable for which this queue is created
   * @param nElem the number of element to buffer
   */
  VariableEventQueue(ComObj& rVar, uint32_t nElem);

  /**
   * @brief Destroy the Variable Event Queue object
   *
   */
  virtual ~VariableEventQueue();

  /**
   * @brief Wait blocking until we have received an event from the device or
   * timeout expired
   *
   * @param TimeoutMs the timeout in ms (0xffffffff => wait forever)
   * @return std::shared_ptr<ComObj> event data container, you've got to return
   * this data via Release
   */
  std::shared_ptr<ComObj> Wait(uint32_t TimeoutMs);

  /**
   * @brief Return the event container to the queue
   *
   * @param pComObj event data container
   * @return SensorResult SSBL_SUCCESS if success
   */
  SensorResult Release(std::shared_ptr<ComObj> pComObj);

 private:
  friend class CoLaProtocol;
  /**
   * @brief Get a free ComObj
   *
   * @return std::shared_ptr<ComObj>
   */
  std::shared_ptr<ComObj> GetFree();

  /**
   * @brief  Get a pending ComObj
   *
   * @return std::shared_ptr<ComObj>
   */
  std::shared_ptr<ComObj> GetPending();

  /**
   * @brief Insert the ComObj in the queue and wakeup receiver
   *
   * @param pComObj
   */
  void InsertInQueue(std::shared_ptr<ComObj> pComObj);

 private:
  // no copy
  VariableEventQueue(VariableEventQueue&&);
  VariableEventQueue& operator=(VariableEventQueue&&);

  std::vector<std::shared_ptr<ComObj>>
      FreeBuffers_;  ///< event data containers created when queue is created
  std::list<std::shared_ptr<ComObj>>
      PendingBuffers_;  ///< pending event data containers - call wait to
                        ///< receive

  uint32_t ElementsAllocated_;  ///< the number of event data containers that
                                ///< have been allocated

  class impl;
  std::unique_ptr<impl> pImpl_;  ///< Pointer to Implementation
};

}  // namespace ssbl
