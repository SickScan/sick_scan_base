/**
 * \file
 * \brief SickLidar2D types and definitions
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

namespace ssbl {

typedef enum {
  SICK_TiM551,
  SICK_TiM561,
  SICK_TiM571,
  SICK_TiM581,
  UNKNOWN_MODEL,
} SickLidar2dModel;

typedef enum {
  LIDAR2D_STATE_ERROR,
  LIDAR2D_STATE_INIT,
  LIDAR2D_STATE_IDLE,
  LIDAR2D_STATE_BUSY_IDLE,
  LIDAR2D_STATE_STARTED,
  LIDAR2D_STATE_STOPPED,

} SickLidar2dState;

// move this enum
typedef enum {
  CON_STATE_DISCONNECTED,
  CON_STATE_CONNECTED,
  CON_STATE_ERRONEOUS_DISCONNECTED,
  CON_STATE_UNKNOWN,
} SickLidar2dConnectionState;

typedef struct {
  double horizontalAngleResolution;
  double scanFrequency;
} FrequencyResolutionPair;

struct SickLidar2dCapabilities {
  SickLidar2dModel model_;
  std::string modelName_;  // Scanner Model (e.g. TIM561 MRS1000 etc.)
  std::string skeletonName_;
  double minRange_;    ///< Min. Range in m
  double maxRange_;    ///< Max. Range in m
  double startAngle_;  ///< Stop Angle in degree
  double stopAngle_;   ///< Start Angle in degree
  std::vector<double>
      verticalAngles_;  ///< Vertical Angle of each Layer in degree
  std::vector<FrequencyResolutionPair> freqResolutionPair_;

  friend std::ostream& operator<<(std::ostream& so,
                                  const SickLidar2dCapabilities& caps);
};
}  // namespace ssbl