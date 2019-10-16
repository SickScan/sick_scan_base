/**
 * \file
 * \brief Factory to create SickLidar2d objects
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

/**
 * @brief Create SickLidar2D
 *
 * @param ModelName name of the SickLidar2dModel to be created
 * @param IP of form xxx.yyy.zzz
 * @return SickLidar2d* or NULL
 */
SickLidar2d* CreateSickLidar2d(std::string ModelName, std::string IP);

}  // namespace ssbl
