/**
 * \file
 * \brief Access Skeletons variables
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

  VariableEventQueue *pEventQueue = NULL;

  // Create a DUT by specifying the name of the Skeleton and its IP
  auto DUT = CreateSensorSkeleton("DT1000", "192.168.100.236");


  if (NULL == DUT) {
    cout << "Skeleton not found!" << endl;
    return -1;
  }

  // Create variable by name
  auto distVar = DUT->CreateVariable("Distance");
  auto laserStateVar =  DUT->CreateVariable("laserState");


  if (SSBL_SUCCESS == DUT->Connect()) {
    
    int32_t d = 0;

    vector<SensorFunction*> sensorFunctions;

    sensorFunctions.push_back(DUT->CreateFunction("disablePilotLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("disableMeasurementLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("enablePilotLaser"));
    sensorFunctions.push_back(DUT->CreateFunction("enableMeasurementLaser"));

    for (int i = 0; i < 100000; i++) {
      
      for (auto v : sensorFunctions) {
        if (SSBL_SUCCESS != DUT->CallFunction(*v)) {
          cout << "Error when trying to execute function " + v->GetName()
               << endl;
          goto exit;
        }
        SSBL_Sleep(500);
      }
     
      // wait until laser initialization has been done
      SSBL_Sleep(500);

      if (SSBL_SUCCESS == DUT->ReadVariable(*distVar)) {
         distVar->GetBasic(d);
      }
      

  
      std::cout << "Distance: " << d << std::endl;

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


