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

#include <Windows.h>
#include <memory>

#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Event.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Event::impl {
 public:
  //========================================================================
  void Create() { eventhandle_ = CreateEvent(nullptr, FALSE, FALSE, nullptr); }

  //========================================================================
  void Emit(void) { SetEvent(eventhandle_); }

  //========================================================================
  EventReturn Wait(uint32_t timeout) {
    DWORD dwWaitResult =
        WaitForSingleObject(eventhandle_, static_cast<DWORD>(timeout));

    if (0 == dwWaitResult) {
      return EVENT_RECEIVED;
    } else if (0x00000102 == dwWaitResult) {  // WAIT_TIMEOUT
      return EVENT_TIMEOUT;
    } else {
      return EVENT_FAILED;
    }
  }

  //========================================================================
  void Delete() {
    if (eventhandle_ != NULL) {
      if (0 == CloseHandle(eventhandle_)) {
        SSBL_LOG_ERROR("Failed to close event handle");
      }
    }
  }

 private:
  HANDLE eventhandle_;
};

//===========================================================================
//===========================================================================
Event::Event() : pImpl_{ssbl::make_unique<impl>()} { pImpl_->Create(); }

//===========================================================================
//===========================================================================
Event::~Event() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

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
Event::Event(Event &&) = default;
Event &Event::operator=(Event &&) = default;
}  // namespace ssbl
