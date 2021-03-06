/**
 * \file
 * \brief Simple time functions
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

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#include "Base/Core/OS/include/Time.h"

namespace ssbl {
timespec SSBL_GetTimestamp() {
  struct timespec ret;
  timespec_get(&ret, TIME_UTC);
  return ret;
}

void SSBL_Sleep(uint32_t milliseconds) { usleep(milliseconds * 1000); }

}  // namespace ssbl
