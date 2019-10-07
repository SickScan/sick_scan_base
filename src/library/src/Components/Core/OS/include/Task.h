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

#pragma once
#include <memory>
#include <string>

namespace ssbl {
enum TaskState {
  TASK_NOT_CREATED,  ///< Initial task state
  TASK_INITIALIZED,  ///< Task is initialized, used on Linux
  TASK_SUSPENDED,    ///< Task is suspended
  TASK_RUNNING,      ///< Task is running
  TASK_DELETED       ///< Task is deleted
};

/**
 * @class Task
 * @brief Base class for creating tasks
 *
 */

class Task {
 public:
  /**
   * @brief Construct a new Task (suspended after creation)
   *
   */
  Task();
  /**
   * @brief Destroy the Task object
   *
   */
  virtual ~Task();

  /**
   * @brief Process the task loop, will stop operation if return is false
   *
   * @return true
   * @return false
   */
  virtual bool TaskLoop() = 0;

  /**
   * @brief Put the task in running state
   *
   * @return TaskState
   */
  TaskState Run();

  /**
   * @brief Put the task in stopped state
   *
   * @return TaskState
   */
  TaskState Stop();

  /**
   * @brief Delete the Task
   *
   * @return TaskState
   */
  TaskState Delete();

  /**
   * @brief Get the Task State
   *
   * @return TaskState
   */
  TaskState GetTaskState() { return TaskState_; };

 private:
  // prevent copy
  Task(Task&&);
  Task& operator=(Task&&);
  /**
   * @brief Internal Entry
   *
   */
  void InternalEntry(void);

 private:
  class impl;                    ////<Forward declaration
  std::unique_ptr<impl> pImpl_;  ///< Pointer to specific implementation
  TaskState TaskState_;          ///< Task State
};

}  // namespace ssbl
