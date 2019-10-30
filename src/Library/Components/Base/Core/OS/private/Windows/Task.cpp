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
#include <process.h>
#include <windows.h>
#include <memory>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Logger/include/Logger.h"

namespace ssbl {

class Task::impl {
 public:
  //========================================================================

  static DWORD WINAPI Entry(LPVOID pArg) {
    SSBL_LOG_DEBUG("Task Entry");
    Task *pParent = reinterpret_cast<Task *>(pArg);
    pParent->InternalEntry();
    return 0;
  }

  //========================================================================
  HANDLE Create(Task *pParent) {
    hThread_ =
        CreateThread(nullptr, 0, Entry, pParent, CREATE_SUSPENDED, &wThreadID_);
    SSBL_ASSERT_IF_NULL(hThread_);
    return hThread_;
  }

  //========================================================================
  DWORD Stop(void) { return SuspendThread(hThread_); }

  //========================================================================
  DWORD Resume(void) { return ResumeThread(hThread_); }

  //========================================================================
  void Delete(void) {
    DWORD exitCode = 0;

    if (hThread_ != NULL) {
      GetExitCodeThread(hThread_, &exitCode);

      if (exitCode == STILL_ACTIVE) {
        TerminateThread(hThread_, DWORD(-1));
      }
      if (0 == CloseHandle(hThread_)) {
        SSBL_LOG_ERROR("Failed to close thread handle");
      }
    }
  }

 private:
  HANDLE hThread_;
  DWORD wThreadID_;
};

//===========================================================================
//===========================================================================
Task::Task() : pImpl_{ssbl::make_unique<impl>()}, TaskState_(TASK_NOT_CREATED) {
  HANDLE ret = pImpl_->Create(this);
  if (0 != ret) {
    SSBL_LOG_DEBUG("Created Task");
    TaskState_ = TASK_SUSPENDED;
  } else {
    SSBL_LOG_ERROR("Task creation failed");
    TaskState_ = TASK_NOT_CREATED;
  }
}

//===========================================================================
//===========================================================================
Task::~Task() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}
Task::Task(Task &&) = default;
Task &Task::operator=(Task &&) = default;

//===========================================================================
//===========================================================================
void Task::InternalEntry(void) {
  bool keepRunning = true;
  while ((TaskState_ != TASK_DELETED) && keepRunning) {
    while ((TaskState_ == TASK_RUNNING) && keepRunning) {
      keepRunning = TaskLoop();
    }
  }
}

//===========================================================================
//===========================================================================
TaskState Task::Run() {
  DWORD res = pImpl_->Resume();

  if (res != (DWORD)-1) TaskState_ = TASK_RUNNING;
  return TaskState_;
}

//===========================================================================
//===========================================================================
TaskState Task::Stop() {
  DWORD res = pImpl_->Stop();

  if (res != (DWORD)-1) TaskState_ = TASK_SUSPENDED;
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
