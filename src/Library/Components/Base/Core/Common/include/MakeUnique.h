/**
 * \file
 * \brief make_unique see
 *  https://en.cppreference.com/w/cpp/memory/unique_ptr/make_unique
 *
 *
 */
#pragma once

#include <memory>

namespace ssbl {

template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
#if __cplusplus == 201103L
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
#else
  return std::make_unique<T>(args...);
#endif
}

}  // namespace ssbl
