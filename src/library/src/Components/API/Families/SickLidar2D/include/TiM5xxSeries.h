/**
 * \file
 * \brief Family API for TiM5xx Family (TiM510 is not supported)
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

#include "API/Families/SickLidar2D/include/SickLidar2D.h"

namespace ssbl {

class VariableEventQueue;

/**
 * @class class TiM5xx
 * @brief Base class for all TiM5xx 2D Lidar
 *
 */
class TiM5xx : public SickLidar2d {
 public:
  using SickLidar2d::Disconnect;
  using SickLidar2d::Start;
  using SickLidar2d::Stop;

  /**
   * @brief Construct a new TiM5xx object
   *
   * @param ModelName name of the SickLidar2dModel to be created
   * @param IP of form xxx.yyy.zzz
   */
  TiM5xx(std::string ModelName, std::string& IP)
      : SickLidar2d(ModelName, IP), pEventQueue(NULL){};

  /**
   * @brief Initialize the Lidar, will establish connection and configure it for
   * operation
   *
   * @param StartAngle in 1/10000 degrees in SickLidar2d coordinate system
   * @param StopAngle in 1/10000 degrees in SickLidar2d coordinate system
   * @param OnScanCb OnScanCb callback to be trigger when scan data arrives
   * @param cbParam cbParam user defined callback parameter
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Initialize(int32_t StartAngle, int32_t StopAngle,
                                  std::function<void(uint64_t*)> OnScanCb,
                                  uint64_t cbParam);

  /**
   * @brief Initialize the Lidar, will establish connection and configure it for
   * operation
   *
   * @param StartAngle in 1/10000 degrees in SickLidar2d coordinate system
   * @param StopAngle in 1/10000 degrees in SickLidar2d coordinate system
   * @param ScanProcessor function called within wait
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Initialize(int32_t StartAngle, int32_t StopAngle,
                                  std::function<void(uint64_t*)> ScanProcessor);

  /**
   * @brief Blocking wait for scan
   *
   * @param TimeoutMs time to wait in ms
   * @return true scan arrived in time
   * @return false timeout
   */
  bool WaitForScanEvent(uint32_t TimeoutMs);

 protected:
  /**
   * @brief Request scan data from the Lidar, called by base class
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult HandleLidarStart();

  /**
   * @brief Stop scan data output, called by base class
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult HandleLidarStop();

  /**
   * @brief Configure scan data output, called by base class
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult HandleLidarConfigure();

 private:
  VariableEventQueue* pEventQueue;
};

/**
 * @class TiM551
 * @brief Derived from TiM5xx
 *
 */
class TiM551 : public TiM5xx {
 public:
  /**
   * @brief Constructor
   *
   * @param IP of form xxx.yyy.zzz
   */
  TiM551(std::string& IP) : TiM5xx(std::string("TiM551"), IP){};
};

/**
 * @class TiM561
 * @brief Derived from TiM5xx
 *
 */
class TiM561 : public TiM5xx {
 public:
  /**
   * @brief Constructor
   *
   * @param IP of form xxx.yyy.zzz
   */
  TiM561(std::string& IP) : TiM5xx(std::string("TiM561"), IP){};
};

/**
 * @class TiM571
 * @brief Derived from TiM5xx
 *
 */
class TiM571 : public TiM5xx {
 public:
  /**
   * @brief Constructor
   *
   * @param IP of form xxx.yyy.zzz
   */
  TiM571(std::string& IP) : TiM5xx(std::string("TiM571"), IP){};
};

/**
 * @class TiM581
 * @brief Derived from TiM5xx
 *
 */
class TiM581 : public TiM5xx {
 public:
  /**
   * @brief Constructor
   *
   * @param IP of form xxx.yyy.zzz
   */
  TiM581(std::string& IP) : TiM5xx(std::string("TiM581"), IP){};
};

}  // namespace ssbl
