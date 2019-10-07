/**
 * \file
 * \brief Some assert macros
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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Assertion Handler
 *
 * @param the assertion
 * @param func the function in which the assertion occured
 * @param file the file in which the assertion occured
 * @param line the line at which the assertion occured
 */
void lib_assertion_handler(const char* assert, const char* func,
                           const char* file, int line);

#define STR(x) #x
//! \def Trigger if 0
#define SSBL_ASSERT_IF_NULL(x)                                   \
  if (!(x)) {                                                    \
    lib_assertion_handler(STR(x), __func__, __FILE__, __LINE__); \
  }
//! \def Trigger if 1
#define SSBL_ASSERT_NOT_NULL(x)                                  \
  if ((x)) {                                                     \
    lib_assertion_handler(STR(x), __func__, __FILE__, __LINE__); \
  }

#ifdef __cplusplus
}  // end extern "C"
#endif
