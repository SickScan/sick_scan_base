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
#include <zephyr.h>
#include "Base/Core/OS/include/Timer.h"

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
*/
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



class Timer::impl {
 public:
   static void HandleTimer(struct k_timer *pTimer) {

	   Timer::impl* pParent = (Timer::impl*) k_timer_user_data_get(pTimer);
	   pParent->ForwardEvent();
	}

  void ForwardEvent(void)
  {
	  if(!autoReload_)
	  {
		  Stop();
	  }

	  SSBL_LOG_DEBUG("Timer Fired");
	  if (nullptr != pParent_) {
		  pParent_->OnTimer();
	  }

  }

  //========================================================================
  void Create(Timer *pParent, uint32_t periodMs, bool autoReload) {
    timerPeriode_ = periodMs;
    autoReload_ = autoReload;

    k_timer_init(&hTimer_, &Timer::impl::HandleTimer , NULL);

    k_timer_user_data_set(&hTimer_, this);

  }

  //========================================================================
  void Delete() {
    Stop();
  }

  //========================================================================
  void Start() {
	  k_timer_start(&hTimer_,timerPeriode_,timerPeriode_);
  }

  //========================================================================
  void Stop(void) {
	  k_timer_stop(&hTimer_);
  }

 private:
  bool autoReload_;
  Timer * pParent_;
  uint32_t timerPeriode_;
  k_timer hTimer_;
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
