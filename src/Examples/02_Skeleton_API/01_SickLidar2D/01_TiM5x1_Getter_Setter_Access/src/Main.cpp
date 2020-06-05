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


int main(void) {
  int32_t x;
  // Variables are usually formed by structs, arrays and complex combinations
  // of both. This can lead to some amount of typing until
  // the desired element is accessed. Thus, we've decided to add some wrapper
  // functions to be able to access elements, which must be unique within the
  // struct, by name. Its not a good example as it requires more typing but it
  // complements the raw access demo. Consider the case that we want to change
  // the start angle within the variable DataOutputRange. Using the skeleton
  // directly would require you to first create the variable with its full type
  // name
  //
  // Raw:       DataOutputRange_TiM5xxSkeleton_Var  orVariable;
  //
  // by contrast the wrapper
  //
  // Wrapper:   auto orVariable = DUT->CreateVariable("DataOutputRange");
  //
  // Variables created using "CreateVariable" can be stored in a standard
  // container such as vector and therefore easily processed in a loop.

  vector<SensorVariable*> readFirst;

  // Create a DUT by specifying the name of the Skeleton and its IP
  auto DUT = TiM5x1_V3_17_17_09_19_Skeleton::CreateSensorSkeleton(
      "TiM576", "192.168.0.1");


  if (NULL == DUT) {
    cout << "Skeleton not found!" << endl;
    return -1;
  }

  // Create variable by name
  auto orVariable = DUT->CreateVariable("DataOutputRange");
  auto scanDataVariable = DUT->CreateVariable("ScanDataConfig");

  // store in vector
  readFirst.push_back(orVariable);
  readFirst.push_back(scanDataVariable);

  if (SSBL_SUCCESS == DUT->Connect()) {
    // loop over all variables within the container and read it from
    // the sensor
    for (auto v : readFirst) {
      if (SSBL_SUCCESS != DUT->ReadVariable(*v)) {
        cout << "Error when trying to read variable " + v->GetName() << endl;
        goto exit;
      }
    }

    // To get a sub element of DataOutputRange you have to type
    // Raw:       x = orVariable.Value_.aRange[0].udiAngleRes
    //
    // by contrast the wrapper
    //
    // Wrapper:   x = orVariable->GetBasicType<uint32_t>("udiAngleRes")
    //
    printf("Angle resolution: %.3lf degrees\n",
           orVariable->GetBasicType<uint32_t>("udiAngleRes") / 10000.00);
    printf("Start angle: %.2lf degrees\n",
           orVariable->GetBasicType<int32_t>("diStartAngle") / 10000.00);
    printf("Stop angle: %.2lf degrees\n",
           orVariable->GetBasicType<int32_t>("diStopAngle") / 10000.00);

    // To set a sub element of DataOutputRange you have to type
    // Raw:       orVariable.Value_.aRange[0].udiAngleRes  = x;
    //
    // This will of course allow you to assign udiAngleRes any value. By
    // contrast the wrapper will check if x is in range and trigger an assert

    // setting x to an invalid value
    x = 99999999;
    // will trigger assert when trying to set the variable to x
    orVariable->SetBasicElement("diStartAngle", x);

    //===============================================================================
    // Disconnect from the Lidar
    //===============================================================================
  exit:
    DUT->Disconnect();
  }

  delete orVariable;

  return 0;
}
