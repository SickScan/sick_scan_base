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

#include "API/Family/Lidar2d/Common/include/Lidar2d_Model.h"

namespace ssbl {

class SensorSkeleton;
class VariableEventQueue;

class TiM5xx_1_0_0_Model : public Lidar2d_Model {
 public:
  using Lidar2d_Model::Disconnect;
  using Lidar2d_Model::Start;
  using Lidar2d_Model::Stop;

  TiM5xx_1_0_0_Model(SensorSkeleton * pSkeleton);
  ~TiM5xx_1_0_0_Model(){};

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
  VariableEventQueue* pEventQueue_;
};

}  // namespace ssbl
