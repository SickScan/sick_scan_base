/**
 * \file
 * \brief A assert macro
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

#include "Base/Core/Common/include/Assert.h"

#include <stdio.h>

#if __GNUC__
__attribute__((weak)) void lib_assertion_handler(const char* assert,
                                                 const char* func,
                                                 const char* file, int line)
#else
void lib_assertion_handler(const char* assert, const char* func,
                           const char* file, int line)
#endif
{
  printf("SSBL ASSERT: (%s), function %s, file %s, line %d.\n", assert, func,
         file, line);
  // stay here
  while (1) {
  }
}
