/**
 * \file
 * \brief Access Skeletons variables using convenience wrappers
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

#include <iostream>
#include <vector>
#include "SSBL.h"

using namespace std;
using namespace ssbl;
using namespace Dx1000_1_8_8_0R_Skeleton;





int main(void) {



  // Create a DUT by specifying the name of the Skeleton and its IP
  auto DUT = CreateSensorSkeleton("DT1000", "192.168.100.236");


  if (NULL == DUT) {
    cout << "Skeleton not found!" << endl;
    return -1;
  }

  // Create variable by name
  auto distVar = DUT->CreateVariable("Distance");
  auto mesaurementSetup = DUT->CreateVariable("acquisitionTime");

  if (SSBL_SUCCESS == DUT->Connect()) {
    int32_t d,j,e;
    e = 0;
    vector<SensorFunction*> sensorFunctions;

    sensorFunctions.push_back(DUT->CreateFunction("disablePilotLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("disableMeasurementLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("enablePilotLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("enableMeasurementLaser"));

    for (int i = 0; i < 100000; i++) {
      uint8_t val = (uint8_t)(i % 5);
      mesaurementSetup->SetBasic(val);
      if (SSBL_SUCCESS != DUT->WriteVariable(*mesaurementSetup)) {
        cout << "Error when trying to execute variable " +
                    mesaurementSetup->GetName()
             << endl;
      }
      SSBL_Sleep(500);
      /*
      for (auto v : sensorFunctions) {
        if (SSBL_SUCCESS != DUT->CallFunction(*v)) {
          cout << "Error when trying to execute function " + v->GetName()
               << endl;
          goto exit;
        }
      }
     */ 
      d = 6096000;
      j = 0;
      while (d == 6096000) {
        if (SSBL_SUCCESS == DUT->ReadVariable(*distVar)) {
          distVar->GetBasic(d);
        } else {
          e = e + 1;
        }
        j = j + 1;
      }

      std::cout << "Loop: " << i;
      std::cout << "\tDistance: " << d;
      std::cout << "\tSub-Loop: " << j;
      std::cout << "\tErrors: " << e << std::endl;


    }

    //===============================================================================
    // Disconnect
    //===============================================================================
  exit:
    DUT->Disconnect();
  }

  delete distVar;

  return 0;
}


