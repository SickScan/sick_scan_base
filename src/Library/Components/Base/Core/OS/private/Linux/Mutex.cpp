/**
 * \file
 * \brief A minimal mutex class
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
#include "Base/Core/OS/include/Mutex.h"
#include <pthread.h>
#include <sys/time.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Mutex::impl {
 public:
  //========================================================================
  void Create(void) {
    pthread_mutexattr_t mutexattr;

    SSBL_ASSERT_NOT_NULL(pthread_mutexattr_init(&mutexattr))
    SSBL_ASSERT_NOT_NULL(
        pthread_mutexattr_settype(&mutexattr, PTHREAD_MUTEX_RECURSIVE))
    SSBL_ASSERT_NOT_NULL(pthread_mutex_init(&mtx_, &mutexattr))
  }

  //========================================================================
  void Delete(void) {
    int ret = pthread_mutex_destroy(&mtx_);
    SSBL_ASSERT_NOT_NULL(ret);
  }

  //========================================================================
  bool Lock(void) {
    bool ret = false;
    int32_t res = pthread_mutex_lock(&mtx_);
    if (0 == res) {
      ret = true;
    } else {
      SSBL_LOG_WARNING("Locking mutex failed");
    }

    return ret;
  }
  //========================================================================
  bool WaitLock(uint32_t msTimeout) {
    bool ret = false;

    struct timespec tswait;
    clock_gettime(CLOCK_MONOTONIC, &tswait);
    tswait.tv_sec += msTimeout / 1000;
    tswait.tv_nsec += (static_cast<long int>(msTimeout) % 1000) * 1000000;

    // overflow?
    if (tswait.tv_nsec > 1000000000) {
      tswait.tv_nsec -= 1000000000;
      tswait.tv_sec += 1;
    }

    int32_t res = pthread_mutex_timedlock(&mtx_, &tswait);

    if (0 == res) {
      ret = true;
    } else {
      SSBL_LOG_WARNING("Locking mutex failed");
    }

    return ret;
  }
  //========================================================================
  bool TryLock(void) {
    bool ret = false;

    int32_t res = pthread_mutex_trylock(&mtx_);
    if (0 == res) {
      ret = true;
    }
    return ret;
  }

  //========================================================================
  bool Unlock(void) {
    bool ret = false;
    int32_t res = pthread_mutex_unlock(&mtx_);
    if (0 == res) {
      ret = true;
    }
    return ret;
  }

 private:
  pthread_mutex_t mtx_;
};

//===========================================================================
//===========================================================================
Mutex::Mutex() : pImpl_{ssbl::make_unique<impl>()} { pImpl_->Create(); }

//===========================================================================
//===========================================================================
bool Mutex::Lock() { return pImpl_->Lock(); }

//===========================================================================
//===========================================================================
bool Mutex::WaitLock(uint32_t msTimeout) { return pImpl_->WaitLock(msTimeout); }

//===========================================================================
//===========================================================================
bool Mutex::TryLock() { return pImpl_->TryLock(); }

//===========================================================================
//===========================================================================
bool Mutex::Unlock() { return pImpl_->Unlock(); }

//===========================================================================
//===========================================================================
Mutex::~Mutex() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

Mutex::Mutex(Mutex &&) = default;
Mutex &Mutex::operator=(Mutex &&) = default;

}  // namespace ssbl
