/**
 * \file
 * \brief Callback Provider Class
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

#include <functional>
#include <map>
#include <string>
#include <vector>

namespace ssbl {
/**
 * @class Callback
 * @brief Helper class for CallbackProvider
 *
 */
class Callback_ {
 public:
  ~Callback_() { Callbacks_.clear(); }
  /**
   * @brief Add callback function to list
   *
   * @param val
   */
  void AddCallback(std::function<void(int)> cb) { Callbacks_.push_back(cb); }

  /**
   * @brief Call all callbacks
   *
   * @param val
   */
  void Fire(int32_t val) {
    for (std::vector<std::function<void(int)>>::iterator it =
             Callbacks_.begin();
         it != Callbacks_.end(); ++it) {
      (*it)(val);
    }
  }

 private:
  std::vector<std::function<void(int)>> Callbacks_;
};

/**
 * @class CallbackProvider
 * @brief Helper class for CallbackProvider
 *
 */
class CallbackProvider {
 public:
  /**
   * @brief Destroy the Callback Provider object
   *
   */
  virtual ~CallbackProvider() {
    for (auto it = EventMap_.begin(); it != EventMap_.end(); it++) {
      delete (*it).second;
    }
    EventMap_.clear();
  };

  /**
   * @brief Add the name of an event for which a callback can be registered
   *
   * @param eventName the name of the event
   */
  void ProvideCallbackEvent(std::string eventName) {
    EventMap_[eventName] = new Callback_();
  }

  /**
   * @brief Call the callback registered to eventName
   *
   * @param eventName the name of the event
   */

  void FireCallback(std::string eventName) {
    Callback_* pCallback = EventMap_[eventName];
    if (pCallback != nullptr) {
      pCallback->Fire(0);
    }
  }

  /**
   * @brief Call the callback registered to eventName
   *
   * @param eventName the name of the event
   * @param value to passed to the callback
   */
  void FireCallback(std::string eventName, int32_t value) {
    Callback_* pCallback = EventMap_[eventName];
    if (pCallback != nullptr) {
      pCallback->Fire(value);
    }
  }

  /**
   * @brief Register a callback for event eventName
   *
   * @param eventName the name of the event
   * @param cb the function to call back
   * @return true
   * @return false
   */
  bool RegisterToCallbackEvent(std::string eventName,
                               std::function<void(int)> cb) {
    Callback_* pCallback = EventMap_[eventName];
    if (pCallback != nullptr) {
      pCallback->AddCallback(cb);
      return true;
    }
    return false;
  }

 protected:
  std::map<std::string, Callback_*> EventMap_;
};

}  // namespace ssbl