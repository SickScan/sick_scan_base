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
#include <Zephyr.h>
#include <memory>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"
#include "Base/Logger/include/Logger.h"
#include "TaskDefinitions.h"



namespace ssbl {




class Task::impl {
 public:

  //========================================================================
  static void Entry(void *pPar, void * pU1, void * pU2) {
    Task *pParent = reinterpret_cast<Task *>(pPar);

    pParent->InternalEntry();
    return;
  }

  //========================================================================
  int32_t Create(Task *pParent) {
    int32_t ret = 0;

    k_sched_lock();

    k_thread_stack_t* pStack = GetSsblTaskStack(0);

    SSBL_ASSERT_IF_NULL(pStack);
    taskId_ = k_thread_create(&Task_,
    			  pStack,
				  K_THREAD_STACK_SIZEOF( pStack),
				  Task::impl::Entry,
				  (void*)pParent, nullptr, nullptr
				  , K_PRIO_COOP(2) //K_PRIO_COOP K_PRIO_PREEMPT
				  , 0
				  , 0 );
    SSBL_ASSERT_IF_NULL(taskId_);

    State_ = TASK_INITIALIZED;
    k_sched_unlock();



    return ret;
  }
  //========================================================================
  void Stop(void) {
	  k_sched_lock();
	  State_ = TASK_SUSPENDED;
	  k_thread_suspend(taskId_);

	 k_sched_unlock();
    return;
  }
  //========================================================================
  void StopInternal(void) {
	  k_thread_suspend(taskId_);
    return;
  }

  //========================================================================
  void Resume(void) {
	  k_sched_lock();
	  State_ = TASK_RUNNING;
    k_thread_resume(taskId_);
    k_sched_unlock();
    return;
  }


  //========================================================================
  void Delete(void) {

	  k_sched_lock();
	  k_thread_suspend(taskId_);
	  k_thread_abort(taskId_);
	k_sched_unlock();

  }
  TaskState GetTaskState(void)
  {
	  return State_;
  }
 private:


  k_tid_t                 taskId_;       //!< task handler
  k_thread                Task_;
  TaskState				  State_;
};



//===========================================================================
//===========================================================================
Task::Task() : pImpl_{ssbl::make_unique<impl>()}, TaskState_(TASK_NOT_CREATED) {
  int32_t ret = pImpl_->Create(this);

  if (0 == ret) {
    while (pImpl_->GetTaskState() != TASK_INITIALIZED) {
      SSBL_Sleep(2);
    }
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
  bool keepRunning = true;
  pImpl_->StopInternal();

  while ((pImpl_->GetTaskState() != TASK_DELETED) && keepRunning) {
	while ((pImpl_->GetTaskState() == TASK_RUNNING) && keepRunning) {
    	keepRunning = TaskLoop();
    }
  }
}

//===========================================================================
//===========================================================================
TaskState Task::Run() {
  if(pImpl_->GetTaskState() != TASK_RUNNING)
  {
	pImpl_->Resume();
  }
  return pImpl_->GetTaskState();
}

//===========================================================================
//===========================================================================
TaskState Task::Stop() {
	  if(pImpl_->GetTaskState() != TASK_SUSPENDED)
	  {
		pImpl_->Stop();
	  }

  return pImpl_->GetTaskState();
}

//===========================================================================
//===========================================================================
TaskState Task::Delete() {
  pImpl_->Delete();
  return TASK_DELETED;
}

}  // namespace ssbl
