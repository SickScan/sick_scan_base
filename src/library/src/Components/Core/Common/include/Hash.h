/**
 * \file
 * \brief Hash functions
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
#include <stdint.h>
#include "Types/include/BasicTypes.h"

namespace ssbl {
constexpr uint64_t val_64_const = 0xcbf29ce484222325;
constexpr uint64_t prime_64_const = 0x100000001b3;

inline uint64_t hash_64_fnv1a(const char* key, const uint64_t len) {
  uint64_t hash = 0xcbf29ce484222325;
  uint64_t prime = 0x100000001b3;

  for (uint64_t i = 0; i < len; ++i) {
    uint8_t value = key[i];
    hash = hash ^ value;
    hash *= prime;
  }

  return (hash);
}

inline constexpr uint64_t hash_64_fnv1a_const(
    const char* const str, const uint64_t value = val_64_const) noexcept {
  return (str[0] == '\0')
             ? value
             : hash_64_fnv1a_const(&str[1],
                                   (value ^ uint64_t(str[0])) * prime_64_const);
}

constexpr uint64_t operator"" _hash(const char* s, std::size_t count) {
  SSBL_UNUSED(count);
  return hash_64_fnv1a_const(s, val_64_const);
}
}  // namespace ssbl