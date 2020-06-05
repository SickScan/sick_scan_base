/**
 * \file
 * \brief Declaration of Lidar2d - Family API for SICK AG 2D Lidar
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
#include <fstream>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "Base/Types/include/SickSensorReturnCodes.h"

namespace ssbl {

// Forward declarations
class Lidar1d_Model;
class SensorSkeleton;
class ReconnectTimer;
class VariableEventQueue;

typedef enum {
  LIDAR1D_STATE_ERROR,
  LIDAR1D_STATE_INIT,
  LIDAR1D_STATE_IDLE,
  LIDAR1D_STATE_BUSY_IDLE,
  LIDAR1D_STATE_STARTED,
  LIDAR1D_STATE_STOPPED,
} Lidar1dState;

typedef struct {
  Lidar1dState state_;
  std::string name_;
} Lidar1dStateText;

/**
 * @class Lidar2d
 * @brief Base class for all 2D Lidar
 *
 */
class Lidar1d {
 public:
  /**
   * @brief Construct a new Sick 2D Lidar object
   *
   * @param ModelName name of the Lidar2dModel to be created
   * @param IP of form xxx.yyy.zzz
   */
  Lidar1d(std::string ModelName, std::string IP, std::string SkeletonVersion);

  /**
   * @brief Destroy the Sick 2D Lidar object
   *
   */
  virtual ~Lidar1d(){};

  /**
   * @brief Initialize the Lidar for receiving scan events via queue, will
   * establish connection and configure the sensor for operation
   *
   * @param StartAngle in 1/10000° in Lidar2d coordinate system
   * @param StopAngle in 1/10000° in Lidar2d coordinate system
   * @param ScanProcessor user defined function to convert and publish scan data
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult Initialize(int32_t StartAngle, int32_t StopAngle,
                          std::function<void(uint64_t*)> ScanProcessor);

  /**
   * @brief Start receiving scan data
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult Start(void);

  /**
   * @brief Stop receiving scan data
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult Stop(void);

  /**
   * @brief Disconnect from the Lidar
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult Disconnect(void);

  /**
   * @brief Blocking wait for scans. If scan is received the scan processor will
   * be called
   *
   */
  bool WaitForScanEvent(uint32_t TimeoutMs);

  /**
   * @brief Get device name from sensor
   *
   * @param DeviceName will contain the device name if successful
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult GetDeviceName(std::string& DeviceName);

  /**
   * @brief Disable reconnect attempts if sensor is lost
   *
   */
  void DisableAutoReconnect();

  /**
   * @brief Get the capabilities of the Lidar
   *
   * @return SickLidar2dCapabilities
   */
  // SickLidar2dCapabilities GetCapabilities(void);

  /**
   * @brief Get a pointer to the underlying skeleton
   *
   * @return std::shared_ptr<SickSensorSkeleton*>
   */
  // std::shared_ptr<SickSensorSkeleton*> GetSkeleton() {
  //  return std::make_shared<SickSensorSkeleton*>(pLidar2D_);
  //}

  /**
   * @brief Get the Lidar State
   *
   * @return SickLidar2dState
   */
  Lidar1dState GetLidarState(void);

 protected:
 private:
  bool Create_Lidar1d(
      std::string const& ModelName,
      std::string const& SkeletonVersion, std::string const& IP
                      );

  std::string ModelName_;
  std::string SkeletonVersion_;
  std::string IP_;

  Lidar1d_Model* pLidarModel_;
};

}  // namespace ssbl
