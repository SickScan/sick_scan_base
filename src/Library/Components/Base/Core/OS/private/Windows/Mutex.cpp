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
#include <windows.h>
#include <memory>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Mutex::impl {
 public:
  //========================================================================
  void Create(void) {
    // create unlocked
    mtx_ = CreateMutex(nullptr, FALSE, nullptr);
    SSBL_ASSERT_IF_NULL(mtx_);
  }

  //========================================================================
  void Delete(void) {
    if (mtx_ != NULL) {
      if (0 == CloseHandle(mtx_)) {
        SSBL_LOG_ERROR("Failed to close mutex handle");
      }
    }
  }

  //========================================================================
  bool Lock(void) {
    bool ret = false;
    DWORD res = WaitForSingleObject(mtx_, INFINITE);
    if (WAIT_OBJECT_0 == res) {
      ret = true;
    }

    return ret;
  }
  //========================================================================
  bool WaitLock(uint32_t msTimeout) {
    bool ret = false;

    // do not wait forever here
    if (msTimeout == 0xFFFFFFFF) {
      SSBL_LOG_WARNING("To wait for an infinite time pleas use Lock()");
      msTimeout -= 1;
    }

    DWORD res = WaitForSingleObject(mtx_, static_cast<DWORD>(msTimeout));
    if (WAIT_OBJECT_0 == res) {
      ret = true;
    } else {
      SSBL_LOG_WARNING("Locking mutex failed");
    }
    return ret;
  }
  //========================================================================
  bool TryLock(void) {
    bool ret = false;
    DWORD res = WaitForSingleObject(mtx_, 0);
    if (WAIT_OBJECT_0 == res) {
      ret = true;
    } else {
      SSBL_LOG_WARNING("Locking mutex failed");
    }
    return ret;
  }

  //========================================================================
  bool Unlock(void) {
    bool ret = false;
    BOOL res = ReleaseMutex(mtx_);
    if (0 != res) {
      ret = true;
    }
    return ret;
  }

 private:
  HANDLE mtx_;
};

//===========================================================================
//===========================================================================
Mutex::Mutex() : pImpl_{ssbl::make_unique<impl>()} { pImpl_->Create(); }

//===========================================================================
//===========================================================================
Mutex::~Mutex() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

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
Mutex::Mutex(Mutex &&) = default;
Mutex &Mutex::operator=(Mutex &&) = default;

}  // namespace ssbl
