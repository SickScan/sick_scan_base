/**
 * \file
 * \brief Example showing how to use the Family API
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

#include "SSBL.h"

using namespace std;
using namespace ssbl;

// Processing a scan using a ScanProcessor function
// The ScanProcessor will be called from the task context of main
void ScanProcessor(uint64_t *pComObj);

int main(void) {
  SensorResult ret;

  //===============================================================================
  // Step 1) Create a Lidar
  //===============================================================================

  Lidar2d DUT("TiM571", "192.168.0.1", "V3_17-17_09_19");
  bool timeout;
  // cout << DUT.GetCapabilities() << endl;

  //===============================================================================
  // Step 2) Initialize it by defining start / stop angle and scan processor
  //===============================================================================
  if (SSBL_SUCCESS ==
      DUT.Initialize(-450000, 2250000,
                     std::bind(&ScanProcessor, std::placeholders::_1))) {
    //===============================================================================
    // Step 3) Start the Lidar
    //===============================================================================
    ret = DUT.Start();

    //===============================================================================
    // Step 4) Wait for scans
    //===============================================================================
    for (int32_t i = 0; i < 1000; i++) {
      timeout = DUT.WaitForScanEvent(500);
    }
    DUT.Stop();
    DUT.Disconnect();
  }

  return 0;
}

void ScanProcessor(uint64_t *pComObj) {
  cout << "ScanProcessor running" << endl;
  // ScanProcessor receives variable ScanData
  auto *pVar = reinterpret_cast<
      ssbl::TiM5x1_V3_17_17_09_19_Skeleton::ScanData_TiM5x1_Var *>(
          pComObj);

  // access elements
  int32_t startAngle =
      pVar->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;
  float scaleFactor =
      pVar->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;

  // for each beam / ray
  for (uint32_t i = 0; i < pVar->Value_.aDataChannel16[0].uiLengthaData; ++i) {
    uint16_t distance = pVar->Value_.aDataChannel16[0].aData[i];
    uint16_t rssi = pVar->Value_.aDataChannel8[0].aData[i];
  }
}
