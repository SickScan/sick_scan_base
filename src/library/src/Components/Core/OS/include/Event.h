/**
 * \file
 * \brief Event class declaration
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

/*! \enum EventReturn
 * The result of a WaitForEvent
 * \var EVENT_RECEIVED
 * received the event
 * \var EVENT_TIMEOUT
 * the event timed out
 * \var EVENT_FAILED
 * something went wrong (OS specific => debug)
 */
enum EventReturn {
  EVENT_RECEIVED,
  EVENT_TIMEOUT,
  EVENT_FAILED,
};

/**
 * @class Event
 * @brief Basic Event Class
 *
 */
class Event {
 public:
  /**
   * @brief Construct a new Event object
   *
   */
  Event();
  /**
   * @brief Destroy the Event object
   *
   */
  ~Event();

  /**
   * @brief Signal that the event occured to listeners
   *
   */
  void SignalEvent(void);

  /**
   * @brief Wait for an event
   *
   * @param msTimeout timeout in ms - wait forever by using 0xFFFFFFFF
   * @return EventReturn
   */
  EventReturn WaitForEvent(uint32_t msTimeout);

 private:
  // no copy
  Event(Event&&);
  Event& operator=(Event&&);

  class impl;
  std::unique_ptr<impl> pImpl_;
};

}  // namespace ssbl