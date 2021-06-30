/**
 * \file
 * \brief A minimal task class
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

#include "Base/Core/OS/include/Task.h"
#include <pthread.h>
#include <memory>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Task::impl {
 public:
  typedef void *(*ENTRYFUNCPTR)(void *);

  //========================================================================
  static void *Entry(void *pArg) {
    Task *pParent = reinterpret_cast<Task *>(pArg);
    pParent->InternalEntry();
    return nullptr;
  }

  //========================================================================
  int32_t Create(Task *pParent) {
    int32_t ret = 0;
    bsuspended_ = true;
    ret = pthread_cond_init(&cv_, nullptr);
    if (ret) {
      return ret;
    }
    ret = pthread_mutex_init(&mp_, nullptr);
    if (ret) {
      return ret;
    }
    ret = pthread_create(&hThread_, nullptr, (ENTRYFUNCPTR)&Task::impl::Entry,
                         (void *)pParent);
    SSBL_ASSERT_IF_NULL(hThread_);
    return ret;
  }

  //========================================================================
  int32_t Stop(void) {
    pthread_mutex_lock(&mp_);
    bsuspended_ = true;
    pthread_mutex_unlock(&mp_);
    return 0;
  }

  //========================================================================
  int32_t Resume(void) {
    pthread_mutex_lock(&mp_);
    bsuspended_ = false;
    pthread_cond_signal(&cv_);
    pthread_mutex_unlock(&mp_);
    return 0;
  }
  //========================================================================
  void CheckSuspended(void) {
    pthread_mutex_lock(&mp_);
    while (bsuspended_) {
      pthread_cond_wait(&cv_, &mp_);
    }
    pthread_mutex_unlock(&mp_);
  }

  //========================================================================
  void Delete(void) {
    int32_t exitCode = pthread_join(hThread_, nullptr);
    SSBL_ASSERT_IF_NULL(exitCode);
  }

 private:
  bool bsuspended_;
  pthread_t hThread_;
  pthread_mutex_t mp_;
  pthread_cond_t cv_;
};

//===========================================================================
//===========================================================================
Task::Task() : pImpl_{ssbl::make_unique<impl>()}, TaskState_(TASK_NOT_CREATED) {
  int32_t ret = pImpl_->Create(this);
  if (0 == ret) {
    while (TaskState_ != TASK_INITIALIZED) {
      SSBL_Sleep(1);
    }
    TaskState_ = TASK_SUSPENDED;
  } else {
  }
}

//===========================================================================
//===========================================================================
Task::~Task() = default;
Task::Task(Task &&) = default;
Task &Task::operator=(Task &&) = default;

//===========================================================================
//===========================================================================
void Task::InternalEntry(void) {
  TaskState_ = TASK_INITIALIZED;
  bool keepRunning = true;
  while ((TaskState_ != TASK_DELETED) && keepRunning) {
    pImpl_->CheckSuspended();
    while ((TaskState_ == TASK_RUNNING) && keepRunning) {
      pImpl_->CheckSuspended();
      keepRunning = TaskLoop();
    }
  }
}

//===========================================================================
//===========================================================================
TaskState Task::Run() {
  pImpl_->Resume();
  TaskState_ = TASK_RUNNING;
  return TaskState_;
}

//===========================================================================
//===========================================================================
TaskState Task::Stop() {
  pImpl_->Stop();

  TaskState_ = TASK_SUSPENDED;
  return TaskState_;
}

//===========================================================================
//===========================================================================
TaskState Task::Delete() {
  pImpl_->Delete();
  TaskState_ = TASK_DELETED;
  return TaskState_;
}

}  // namespace ssbl
