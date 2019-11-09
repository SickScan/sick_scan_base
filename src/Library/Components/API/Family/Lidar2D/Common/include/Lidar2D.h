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
class Lidar2d_Model;
  
class SensorSkeleton;
class ReconnectTimer;
class VariableEventQueue;



/**
 * @class Lidar2d
 * @brief Base class for all 2D Lidar
 *
 */
class Lidar2d {
 public:

  /**
   * @brief Construct a new Sick 2D Lidar object
   *
   * @param ModelName name of the Lidar2dModel to be created
   * @param IP of form xxx.yyy.zzz
   */
  Lidar2d(std::string& ModelName, std::string& IP, std::string& SkeletonVersion);

  /**
   * @brief Destroy the Sick 2D Lidar object
   *
   */
  virtual ~Lidar2d(){};


 protected:

 protected:


  private:
    bool Create_Lidar2d(std::string& ModelName, std::string& IP,
                      std::string& SkeletonVersion);
    
    
    Lidar2d_Model * pLidarModel_;

};

}  // namespace ssbl
