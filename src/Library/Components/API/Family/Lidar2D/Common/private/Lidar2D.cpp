/**
 * \file
 * \brief Implementation of Lidar2d - Family API for SICK AG 2D Lidar
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

#include "API/Family/Lidar2d/Common/include/Lidar2d.h"



#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Timer.h"
#include "Base/Types/include/BasicTypes.h"

using namespace std;

namespace ssbl {

Lidar2d::Lidar2d(string& ModelName, string& IP, std::string& SkeletonVersion) {
  
  Create_Lidar2d(ModelName, IP, SkeletonVersion);


}

}  // namespace ssbl
