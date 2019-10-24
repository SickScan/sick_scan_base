/**
 * \file
 * \brief Hash functions grabbed from
 *  https://gist.github.com/underscorediscovery/81308642d0325fd386237cfa3b44785c
 *
 * fnv1a 32 and 64 bit hash functions
 * key is the data to hash, len is the size of the data (or how much of it to
 * hash against)
 * code license: public domain or equivalent
 *
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

/*
Switch to this function as soon as we can move to C++14

constexpr uint64_t operator"" _hash(const char* s, std::size_t count) {
  SSBL_UNUSED(count);
  return hash_64_fnv1a_const(s, val_64_const);
}
*/
}  // namespace ssbl