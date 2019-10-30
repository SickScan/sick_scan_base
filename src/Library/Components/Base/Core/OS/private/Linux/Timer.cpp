/**
 * \file
 * \brief Base class for all timers
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
#include "Base/Core/OS/include/Timer.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"
#include "Base/Types/include/BasicTypes.h"

namespace ssbl {

/**
 * @brief the timer callback
 *
 * @param sig unused
 * @param si contains pointer to parent
 * @param uc unused
 */

static void timer_handler(int sig, siginfo_t *si, void *uc) {
  SSBL_UNUSED(sig);
  SSBL_UNUSED(uc);
  Timer *pParent = static_cast<Timer *>(si->si_value.sival_ptr);
  SSBL_LOG_DEBUG("Timer Fired");
  if (nullptr != pParent) {
    pParent->OnTimer();
  }
}

class Timer::impl {
 public:
  //========================================================================
  void Create(Timer *pParent, uint32_t periodMs, bool autoReload) {
    struct sigevent sev;
    struct sigaction sa;

    timerPeriode_ = periodMs;
    autoReload_ = autoReload;

    if (autoReload_) {
      its_.it_value.tv_sec = timerPeriode_ / 1000;
      its_.it_value.tv_nsec = timerPeriode_ % 1000;
      its_.it_value.tv_nsec *= 1000000;
      its_.it_interval.tv_sec = its_.it_value.tv_sec;
      its_.it_interval.tv_nsec = its_.it_value.tv_nsec;
    } else {
      its_.it_value.tv_sec = timerPeriode_ / 1000;
      its_.it_value.tv_nsec = timerPeriode_ % 1000;
      its_.it_value.tv_nsec *= 1000000;
      its_.it_interval.tv_sec = 0;
      its_.it_interval.tv_nsec = 0;
    }

    // set up signal
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = timer_handler;

    sigemptyset(&sa.sa_mask);
    if (sigaction(SIGRTMIN, &sa, nullptr) == -1) {
      SSBL_LOG_ERROR("Cant bind signal");
      SSBL_ASSERT_IF_NULL(0);
    }

    sigemptyset(&mask_);

    sigaddset(&mask_, SIGRTMIN);
    if (-1 == sigprocmask(SIG_SETMASK, &mask_, nullptr)) {
      SSBL_ASSERT_IF_NULL(0);
    }
    // set up the timer
    sev.sigev_notify = SIGEV_SIGNAL;
    sev.sigev_signo = SIGRTMIN;
    sev.sigev_value.sival_ptr = pParent;

    if (-1 == timer_create(CLOCK_MONOTONIC, &sev, &handle_)) {
      SSBL_LOG_ERROR("Cant create timer");
      SSBL_ASSERT_IF_NULL(0);
    }
    if (-1 == sigprocmask(SIG_UNBLOCK, &mask_, nullptr)) {
      SSBL_LOG_ERROR("Error unblocking timer signal");
      SSBL_ASSERT_IF_NULL(0);
    }
  }

  //========================================================================
  void Delete() {
    Stop();
    if (timer_delete(handle_) == -1) {
      SSBL_LOG_ERROR("Error deleting timer");
    }
  }

  //========================================================================
  void Start() {
    if (timer_settime(handle_, 0, &its_, nullptr) == -1) {
      SSBL_LOG_ERROR("Error setting up timer");
    }
  }

  //========================================================================
  void Stop(void) {
    its_.it_value.tv_sec = 0;
    its_.it_value.tv_nsec = 0;
    its_.it_interval.tv_sec = 0;
    its_.it_interval.tv_nsec = 0;
    if (timer_settime(handle_, 0, &its_, nullptr) == -1) {
      SSBL_LOG_ERROR("Error setting up timer");
    }
  }

 private:
  timer_t handle_;
  bool autoReload_;
  uint32_t timerPeriode_;
  sigset_t mask_;
  struct itimerspec its_;
};

//===========================================================================
//===========================================================================
Timer::Timer(uint32_t periodMs, bool autoReload)
    : pImpl_{ssbl::make_unique<impl>()} {
  pImpl_->Create(this, periodMs, autoReload);
}

//===========================================================================
//===========================================================================
Timer::~Timer() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

//===========================================================================
//===========================================================================
void Timer::Start() { pImpl_->Start(); }

//===========================================================================
//===========================================================================
void Timer::Stop() { pImpl_->Stop(); }

//===========================================================================
//===========================================================================
Timer::Timer(Timer &&) = default;
Timer &Timer::operator=(Timer &&) = default;

}  // namespace ssbl
