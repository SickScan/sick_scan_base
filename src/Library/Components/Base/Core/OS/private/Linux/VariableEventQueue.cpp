/**
 * \file
 * \brief A VariableEventQueue
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
#include "Base/Core/OS/include/VariableEventQueue.h"
#include <semaphore.h>
#include <string>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Mutex.h"
#include "Base/Logger/include/Logger.h"

using namespace std;

namespace ssbl {

class VariableEventQueue::impl {
 public:
  //========================================================================
  void Create(uint32_t nElem) {
    nElem_ = nElem;
    SSBL_ASSERT_NOT_NULL(sem_init(&sem_, 0, 0))
  }

  //========================================================================
  void Delete() {
    int32_t val = 1;
    while (val != 0) {
      if (EINVAL != sem_getvalue(&sem_, &val)) {
        sem_post(&sem_);
      }
    }
    if (EINVAL != sem_getvalue(&sem_, &val)) {
      if (-1 == sem_destroy(&sem_)) {
        SSBL_LOG_ERROR("Failed to close queue handle");
      }
    }
  }

  //========================================================================
  void PostMessage() {
    if (0 != sem_post(&sem_)) {
      SSBL_LOG_ERROR("Failed to notify queue");
    }
  }

  //========================================================================
  SensorResult Wait(uint32_t TimeoutMS) {
    SensorResult ret = SSBL_RES_NO_PENDING_DATA;
    int32_t res;
    struct timespec tswait;

    // No CLOCK_MONOTONIC here !
    clock_gettime(CLOCK_REALTIME, &tswait);

    tswait.tv_sec += TimeoutMS / 1000;
    tswait.tv_nsec += (static_cast<long int>(TimeoutMS) % 1000) * 1000000;

    // overflow?
    if (tswait.tv_nsec > 1000000000) {
      tswait.tv_nsec -= 1000000000;
      tswait.tv_sec += 1;
    }
    if (TimeoutMS == 0xFFFFFFFF) {
      res = sem_wait(&sem_);
    } else {
      res = sem_timedwait(&sem_, &tswait);
    }
    if (0 == res) {
      ret = SSBL_SUCCESS;
    }

    return ret;
  }

  Mutex mtx_;

 private:
  uint32_t nElem_;
  sem_t sem_;
};

//===========================================================================
//===========================================================================
VariableEventQueue::VariableEventQueue(ComObj &rVar, uint32_t nElem)
    : pImpl_{ssbl::make_unique<impl>()} {
  pImpl_->Create(nElem);

  for (uint32_t i = 0; i < nElem; ++i) {
    FreeBuffers_.push_back(std::shared_ptr<ComObj>(rVar.Clone()));
  }
  ElementsAllocated_ = nElem;
}
//===========================================================================
//===========================================================================
VariableEventQueue::~VariableEventQueue() {
  uint32_t deleted = 0;
  pImpl_->mtx_.Lock();
  deleted = FreeBuffers_.size() + PendingBuffers_.size();

  FreeBuffers_.clear();
  PendingBuffers_.clear();

  pImpl_->mtx_.Unlock();
  pImpl_->Delete();
  pImpl_.reset(nullptr);
  if (deleted != ElementsAllocated_) {
    SSBL_LOG_WARNING(
        "Not all ComObjs have been returned to VariableEventQueue");
  }
}

//===========================================================================
//===========================================================================
std::shared_ptr<ComObj> VariableEventQueue::Wait(uint32_t TimeoutMs) {
  std::shared_ptr<ComObj> ret = NULL;
  if (SSBL_SUCCESS == pImpl_->Wait(TimeoutMs)) {
    ret = GetPending();
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult VariableEventQueue::Release(std::shared_ptr<ComObj> pVar) {
  SensorResult ret = SSBL_ERR_EVENT_QUEUE;
  if (pImpl_->mtx_.Lock()) {
    ret = SSBL_SUCCESS;
    FreeBuffers_.push_back(pVar);
    pImpl_->mtx_.Unlock();
  } else {
    SSBL_LOG_WARNING("Can't acquire Variable Event Queue");
  }
  return ret;
}
//===========================================================================
//===========================================================================
std::shared_ptr<ComObj> VariableEventQueue::GetPending() {
  std::shared_ptr<ComObj> ret = NULL;
  if (pImpl_->mtx_.Lock()) {
    // get oldest pending buffer
    ret = PendingBuffers_.front();
    PendingBuffers_.pop_front();
    pImpl_->mtx_.Unlock();
  } else {
    SSBL_LOG_WARNING("Failed to acquire Event Queue lock");
  }
  return ret;
}

//===========================================================================
//===========================================================================
void VariableEventQueue::InsertInQueue(std::shared_ptr<ComObj> pComObj) {
  if (pImpl_->mtx_.Lock()) {
    PendingBuffers_.push_back(pComObj);
    pImpl_->mtx_.Unlock();
    pImpl_->PostMessage();
  } else {
    SSBL_LOG_WARNING("Failed to acquire Event Queue lock");
  }
}
//===========================================================================
//===========================================================================
std::shared_ptr<ComObj> VariableEventQueue::GetFree() {
  std::shared_ptr<ComObj> ret = NULL;
  if (pImpl_->mtx_.Lock()) {
    if (FreeBuffers_.size()) {
      // get free buffer
      ret = FreeBuffers_.back();
      FreeBuffers_.pop_back();
    } else if (PendingBuffers_.size()) {
      // get oldest pending buffer
      pImpl_->Wait(0);  // reduce the semaphore count
      ret = PendingBuffers_.front();
      PendingBuffers_.pop_front();
    }
    pImpl_->mtx_.Unlock();
  }

  if (NULL == ret) {
    SSBL_LOG_WARNING("Event Queue out of buffers");
  }
  return ret;
}

//===========================================================================
//===========================================================================
VariableEventQueue::VariableEventQueue(VariableEventQueue &&) = default;
VariableEventQueue &VariableEventQueue::operator=(VariableEventQueue &&) =
    default;

}  // namespace ssbl
