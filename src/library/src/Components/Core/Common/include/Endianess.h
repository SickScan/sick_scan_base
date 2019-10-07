/**
 * \file
 * \brief Wrapper for compiler specific swap operations on base types
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

#ifdef _MSC_VER

#include <stdlib.h>

//! \brief Swap a 16 bit value
#define bswap_16(x) _byteswap_ushort(x)
//! \brief Swap a 32 bit value
#define bswap_32(x) _byteswap_ulong(x)
//! \brief Swap a 64 bit value
#define bswap_64(x) _byteswap_uint64(x)

#else
//! \brief Swap a 16 bit value
#define bswap_16(x) ((unsigned int)__builtin_bswap16(x))
//! \brief Swap a 32 bit value
#define bswap_32(x) ((unsigned int)__builtin_bswap32(x))
//! \brief Swap a 64 bit value
#define bswap_64(x) ((unsigned int)__builtin_bswap64(x))
#endif

}  // namespace ssbl