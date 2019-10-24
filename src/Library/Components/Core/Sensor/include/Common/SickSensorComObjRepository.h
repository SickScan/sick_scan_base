//=======================================================================================
// Copyright 2019, SICK AG, Waldkirch
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=======================================================================================
//! \file
//! \brief    Declaration of class SickSensor
//=======================================================================================
#pragma once

#include <stdio.h>
#include <string.h>
#include <map>
#include <string>
#include "Core/OS/include/Mutex.h"
#include "Protocol/include/Common/ComObject.h"

namespace ssbl {

template <class T>
class SickSensorComObjRepository {
 public:
  typedef T* (*CreateFunc)();

  virtual ~SickSensorComObjRepository() {
    RegisterLock_.Unlock();
    Register_.clear();
  }

  void RegisterComObj(const std::string& varName, CreateFunc Function) {
    RegisterLock_.Lock();
    Register_[varName] = Function;
    RegisterLock_.Unlock();
  }

  T* Create(std::string& registerName) {
    T* pRet = nullptr;
    typename std::map<std::string, CreateFunc>::iterator it;
    RegisterLock_.Lock();
    it = Register_.find(registerName);
    if (it != Register_.end()) pRet = (*it->second)();

    RegisterLock_.Unlock();
    return pRet;
  }

  bool EntryExists(const std::string& registerName) {
    bool ret = false;
    typename std::map<std::string, CreateFunc>::iterator it;

    RegisterLock_.Lock();
    it = Register_.find(registerName);
    if (it != Register_.end()) ret = true;

    RegisterLock_.Unlock();
    return ret;
  }

 private:
  std::map<std::string, CreateFunc> Register_;
  Mutex RegisterLock_;
};

}  // namespace ssbl
