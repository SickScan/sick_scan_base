/**
 * \file
 * \brief A simple timer class
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

// Fix MinGW complaints - might be replaced by you
#ifdef __MINGW32__
#define _WIN32_WINNT 0x0A00
#endif

#include "Base/Core/OS/include/Timer.h"
#include <Windows.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"
#include "Base/Types/include/BasicTypes.h"

namespace ssbl {
#define _SSL_FT_MS ((int64_t)10000)

/**
 * @brief The timer callback
 *
 * @param Inst unused
 * @param Arg Pointer to parent class
 * @param Tim unused
 * @return VOID TimerCb
 */
VOID CALLBACK TimerCb(PTP_CALLBACK_INSTANCE Inst, PVOID Arg, PTP_TIMER Tim) {
  SSBL_UNUSED(Inst);
  SSBL_UNUSED(Tim);
  Timer *pParent = static_cast<Timer *>(Arg);
  pParent->OnTimer();
}

class Timer::impl {
 public:
  //========================================================================
  void Create(Timer *pParent, uint32_t periodMs, bool autoReload) {
    timerPeriode_ = periodMs;
    autoReload_ = autoReload;
    handle_ = CreateThreadpoolTimer(TimerCb, pParent, nullptr);
    SSBL_ASSERT_IF_NULL(handle_);
  }
  //========================================================================
  void Delete() {
    Stop();
    CloseThreadpoolTimer(handle_);
  }
  //========================================================================
  void Start() {
    DWORD periode;
    FILETIME dueTime;
    SYSTEMTIME systime;
    ULONGLONG qwResult;
    GetSystemTime(&systime);
    SystemTimeToFileTime(&systime, &dueTime);

    qwResult =
        (((ULONGLONG)dueTime.dwHighDateTime) << 32) + dueTime.dwLowDateTime;
    qwResult = qwResult + _SSL_FT_MS * timerPeriode_;
    dueTime.dwLowDateTime = (DWORD)(qwResult & 0xFFFFFFFF);
    dueTime.dwHighDateTime = (DWORD)(qwResult >> 32);

    if (autoReload_) {
      periode = timerPeriode_;
    } else {
      periode = 0;
    }
    SetThreadpoolTimer(handle_, &dueTime, periode, 0);
  }

  //========================================================================
  void Stop(void) { SetThreadpoolTimer(handle_, nullptr, 0, 0); }

 private:
  PTP_TIMER handle_;
  bool autoReload_;
  uint32_t timerPeriode_;
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
