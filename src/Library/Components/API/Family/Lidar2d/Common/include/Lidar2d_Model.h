/**
 * \file
 * \brief Lidar2d types and definitions
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
#include <memory>
#include "API/Family/Lidar2d/Common/include/Lidar2d.h"
#include "Base/Types/include/SickSensorReturnCodes.h"

namespace ssbl {

class Lidar2d_Model {
 public:
  Lidar2d_Model(SensorSkeleton * pSkeleton);
  ~Lidar2d_Model(){};

  /**
   * @brief Initialize the Lidar for receiving scan events via queue, will
   * establish connection and configure the sensor for operation
   *
   * @param StartAngle in 1/10000° in SickLidar2d coordinate system
   * @param StopAngle in 1/10000° in SickLidar2d coordinate system
   * @param ScanProcessor user defined function to convert and publish scan
   * data
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Initialize(
      int32_t StartAngle, int32_t StopAngle,
      std::function<void(uint64_t*)> ScanProcessor) = 0;

  /**
   * @brief Start receiving scan data
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Start() {
    return ProcessStateMachine(LIDAR2D_STATE_STARTED);
  };

  /**
   * @brief Stop receiving scan data
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Stop() {
    return ProcessStateMachine(LIDAR2D_STATE_STOPPED);
  };

  /**
   * @brief Disconnect from the Lidar
   *
   * @return SensorResult SSBL_SUCCES if successful
   */
  virtual SensorResult Disconnect() {
    return ProcessStateMachine(LIDAR2D_STATE_IDLE);
  };

  /**
   * @brief Blocking wait for scans. If scan is received the scan processor
   * will be called
   *
   */
  virtual bool WaitForScanEvent(uint32_t TimeoutMs) = 0;

  /**
   * @brief Get device name from sensor
   *
   * @param DeviceName will contain the device name if successful
   * @return SensorResult SSBL_SUCCES if successful
   */
  SensorResult GetDeviceName(std::string& DeviceName);

  /**
   * @brief Get the capabilities of the Lidar
   *
   * @return SickLidar2dCapabilities
   */
  // Lidar2dCapabilities GetCapabilities(void);

  /**
   * @brief Get a pointer to the underlying skeleton
   *
   * @return std::shared_ptr<SickSensorSkeleton*>
   */
  // std::shared_ptr<SickSensorSkeleton*> GetSkeleton() {
  //   return std::make_shared<SickSensorSkeleton*>(pLidar2D_);
  // }

  /**
   * @brief Get the Lidar State
   *
   * @return SickLidar2dState
   */
  Lidar2dState GetLidarState();

  /**
   * @brief Disable reconnect attempts if sensor is lost
   *
   */
  void DisableAutoReconnect() { AutoReconnect_ = false; }

 protected:
  /**
   * @brief Set the initialized flag (required by derived class)
   *
   */
  void SetInitialized();

  /**
   * @brief Handle a Lidar configure request (implemented by derived class)
   *
   * @return SensorResult if successful
   */
  virtual SensorResult HandleLidarConfigure() = 0;
  /**
   * @brief Handle a Lidar start request (implemented by derived class)
   *
   * @return SensorResult if successful
   */
  virtual SensorResult HandleLidarStart() = 0;

  /**
   * @brief Handle a Lidar stop request (implemented by derived class)
   *
   * @return SensorResult if successful
   */
  virtual SensorResult HandleLidarStop() = 0;

  /**
   * @brief Trigger the Lidar state machine state (will call internal state
   * machine MoveToLidarState)
   *
   * @param TargetState the desired state
   * @return SensorResult if successful
   */
  SensorResult ProcessStateMachine(Lidar2dState TargetState);

 private:
  friend class ReconnectTimer;
  /**
   * @brief Set the Lidar statemachine to state LidarState
   *
   * @param LidarState
   */
  void SetLidarState(Lidar2dState LidarState);
  /**
   * @brief Process the internal state machine
   *
   * @param TargetState the desired state
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult MoveToLidarState(Lidar2dState TargetState);

  /**
   * @brief Handle transition from init to TargetState
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateInit(Lidar2dState TargetState);
  /**
   * @brief Handle transition from idle to TargetState
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateIdle(Lidar2dState TargetState);
  /**
   * @brief Handle transition from busy idle to TargetState
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateBusyIdle(Lidar2dState TargetState);
  /**
   * @brief Handle transition from start to TargetState
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateStart(Lidar2dState TargetState);
  /**
   * @brief Handle transition from stop to TargetState
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateStop(Lidar2dState TargetState);

  /**
   * @brief Handle transition to error state
   *
   * @param TargetState
   * @return SensorResult
   */
  SensorResult HandleStateError(Lidar2dState TargetState,
                                SensorResult prevResult, std::string error);
  ReconnectTimer* pReconnectTimer;

  /**
   * @brief Try to handle a device lost event
   *
   * @param val
   */
  void HandleDeviceLost(int32_t val);

 protected:
  SensorSkeleton* pLidar2DSkeleton_;  ///< Pointer to the skelton
  bool IsInitialized_;                ///< Is this Lidar initialized?
  bool AutoReconnect_;        ///< Shall we try to reconnect on device lost?
  Lidar2dState LidarState_;   ///< The state
  Lidar2dState StoredState_;  ///< Stored state - required when device is
                              ///< lost and we need go through init again
  int32_t StartAngle_;        ///< measurement start
  int32_t StopAngle_;         ///< measurement stop
  std::function<void(uint64_t*)> CallbackFunc_;  ///< scan event callback
  uint64_t CallbackParam_;  ///< scan even callback parameter
  std::function<void(uint64_t*)>
      ScanProcessorFunc_;  ///< scan processor callback
};

}  // namespace ssbl