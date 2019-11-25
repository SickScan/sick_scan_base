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
#include <zephyr.h>
#include <limits.h>
#include "Base/Core/OS/include/Event.h"
#include <sys/time.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Event::impl {
 public:
  //========================================================================
  void Create() {
	  k_poll_signal_init(&Signal_);

	  k_poll_event_init(&Event_,
			  K_POLL_TYPE_SIGNAL,
			   K_POLL_MODE_NOTIFY_ONLY,
			   &Signal_);

  }
  //========================================================================
  void Delete() {
  }

  //========================================================================
  void Emit(void) {

	  k_poll_signal_raise(&Signal_, 0xABCD);
  }

  //========================================================================
  EventReturn Wait(uint32_t msTimeout) {

	  if(msTimeout > INT32_MAX)
	  {
		  k_poll(&Event_, 1, K_FOREVER);
	  }
	  else
	  {
		  k_poll(&Event_, 1, msTimeout);
	  }

	  if(Signal_.signaled)
	  {
		  Signal_.signaled = 0;
	  }

	if (Event_.signal->result == 0xABCD) {
		return EVENT_RECEIVED;
	} else {
		return EVENT_FAILED;
	}
  }

 private:
  k_poll_signal Signal_;
  k_poll_event  Event_;


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
