/**
 * \file
 * \brief Event class declaration
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

#include "Base/Core/OS/include/Event.h"
#include <pthread.h>
#include <sys/time.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Event::impl {
 public:
  //========================================================================
  void Create() {
    pthread_condattr_t conda;

    SSBL_ASSERT_IF_NULL((0 == pthread_mutex_init(&mtx_, nullptr)));
    SSBL_ASSERT_IF_NULL((0 == pthread_condattr_init(&conda)));
    SSBL_ASSERT_IF_NULL(
        (0 == pthread_condattr_setclock(&conda, CLOCK_MONOTONIC)));
    SSBL_ASSERT_IF_NULL((0 == pthread_cond_init(&cv_, &conda)));
    SSBL_ASSERT_IF_NULL((0 == pthread_condattr_destroy(&conda)));

    done_ = false;
  }
  //========================================================================
  void Delete() {
    // release the conditional
    Emit();
    if (0 != pthread_cond_destroy(&cv_)) {
      SSBL_LOG_ERROR("Failed to delete condition (Event)");
    } else {
      if (0 != pthread_mutex_destroy(&mtx_)) {
        SSBL_LOG_ERROR("Failed to delete mutex (Event)");
      }
    }
  }

  //========================================================================
  void Emit(void) {
    SSBL_LOG_DEBUG("Send signal");
    SSBL_ASSERT_IF_NULL((0 == pthread_mutex_lock(&mtx_)));
    done_ = true;
    SSBL_ASSERT_IF_NULL((0 == pthread_cond_signal(&cv_)));
    SSBL_ASSERT_IF_NULL((0 == pthread_mutex_unlock(&mtx_)));
    SSBL_LOG_DEBUG("Signaled");
  }

  //========================================================================
  EventReturn Wait(uint32_t msTimeout) {
    int result = 0;

    struct timespec tswait;

    // lock the mutex
    if (0 != pthread_mutex_lock(&mtx_)) {
      SSBL_LOG_ERROR("Cant acquire event mutex");
      return EVENT_FAILED;
    }

    // get the recent time
    // gettimeofday(&tv, nullptr); => MinGW but I guess thats not monotonic
    clock_gettime(CLOCK_MONOTONIC, &tswait);

    tswait.tv_sec += msTimeout / 1000;
    tswait.tv_nsec += (static_cast<long int>(msTimeout) % 1000) * 1000000;

    // overflow?
    if (tswait.tv_nsec > 1000000000) {
      tswait.tv_nsec -= 1000000000;
      tswait.tv_sec += 1;
    }

    while (!done_) {
      if (msTimeout == 0xFFFFFFFF) {
        SSBL_LOG_DEBUG("Wait Forever");
        result = pthread_cond_wait(&cv_, &mtx_);
        break;
      } else {
        SSBL_LOG_DEBUG("Wait timed");
        result = pthread_cond_timedwait(&cv_, &mtx_, &tswait);
        // handle sporadic wakeups
        if (!done_) {
          if ((EVENT_TIMEOUT == result) || (EVENT_FAILED == result) ||
              elapsedMs(&tswait) >= msTimeout) {
            break;
          }
        }
      }
    }
    done_ = false;

    if (0 != pthread_mutex_unlock(&mtx_)) {
      SSBL_LOG_ERROR("Cant unlock event mutex");
      return EVENT_FAILED;
    }

    switch (result) {
      case 0: {
        return EVENT_RECEIVED;
        break;
      }
      case ETIMEDOUT: {
        return EVENT_TIMEOUT;
        break;
      }
      default: {
        return EVENT_FAILED;
        break;
      }
    }
  }

 private:
  uint32_t elapsedMs(struct timespec *start) {
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);

    if ((now.tv_nsec - start->tv_nsec) < 0) {
      now.tv_sec = now.tv_sec - start->tv_sec - 1;
      now.tv_nsec = now.tv_nsec - start->tv_nsec + 1000000000;
    } else {
      now.tv_sec = now.tv_sec - start->tv_sec;
      now.tv_nsec = now.tv_nsec - start->tv_nsec;
    }

    return (now.tv_sec * 1000) + (now.tv_nsec) / 1000000;
  }

  bool done_;
  pthread_cond_t cv_;
  pthread_mutex_t mtx_;
};

//===========================================================================
//===========================================================================
Event::Event() : pImpl_{ssbl::make_unique<impl>()} { pImpl_->Create(); }

//===========================================================================
//===========================================================================
void Event::SignalEvent(void) { pImpl_->Emit(); }

//===========================================================================
//===========================================================================
EventReturn Event::WaitForEvent(uint32_t msTimeout) {
  return pImpl_->Wait(msTimeout);
}

//===========================================================================
//===========================================================================
Event::~Event() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

//===========================================================================
//===========================================================================
Event::Event(Event &&) = default;
Event &Event::operator=(Event &&) = default;

}  // namespace ssbl
