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


int main(void) {
  Lidar2d DUT("TiM571", "1.0.0", "192.168.0.1");

  return 0;
}

//// Processing a scan using a callback
//// The callback will be called from the task context of the receiver task.
//// Thus driver operation is highly bound to what is done within OnScan
//void OnScan(uint64_t *pEventData);
//
//// Processing a scan using a ScanProcessor function
//// The ScanProcessor will be called from the task context of main
//void ScanProcessor(uint64_t *pComObj);
//
//int main(void) {
//  SensorResult ret;
//
//  //===============================================================================
//  // Step 1) Create a Lidar
//  //===============================================================================
//  SickLidar2d *DUT = CreateSickLidar2d("TiM571", "192.168.0.1");
//  bool timeout;
//  cout << DUT->GetCapabilities() << endl;
//
//  //===============================================================================
//  // Step 2) Initialize it by defining start / stop angle and scan processor
//  //===============================================================================
//#ifndef USE_CALLBACK
//  if (SSBL_SUCCESS ==
//      DUT->Initialize(-450000, 2250000,
//                      std::bind(&ScanProcessor, std::placeholders::_1))) {
//#else
//  uint64_t UserParam = 5;
//  if (SSBL_SUCCESS == DUT->Initialize(-450000, 2250000, OnScan, UserParam)) {
//#endif
//    //===============================================================================
//    // Step 3) Start the Lidar
//    //===============================================================================
//    ret = DUT->Start();
//
//    //===============================================================================
//    // Step 4) Wait for scans
//    //===============================================================================
//    for (int32_t i = 0; i < 1000; i++) {
//      timeout = DUT->WaitForScanEvent(500);
//    }
//    DUT->Stop();
//    DUT->Disconnect();
//
//    delete DUT;
//  }
//
//  return 0;
//}
//
//void ScanProcessor(uint64_t *pComObj) {
//  cout << "ScanProcessor running" << endl;
//  // ScanProcessor receives variable ScanData
//  auto *pVar =
//      reinterpret_cast<ssbl::DevTiM5xxSkeleton::ScanData_TiM5xxSkeleton_Var *>(
//          pComObj);
//
//  // access elements
//  int32_t startAngle =
//      pVar->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;
//  float scaleFactor =
//      pVar->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;
//
//  // for each beam / ray
//  for (uint32_t i = 0; i < pVar->Value_.aDataChannel16[0].uiLengthaData; ++i) {
//    uint16_t distance = pVar->Value_.aDataChannel16[0].aData[i];
//    uint16_t rssi = pVar->Value_.aDataChannel8[0].aData[i];
//  }
//}
//
//void OnScan(uint64_t *pEventData) {
//  cout << "OnScan running" << endl;
//
//  // Callback receives variable SsblEventContainer
//
//  SsblEventContainer *pEvent =
//      reinterpret_cast<SsblEventContainer *>(pEventData);
//
//  // pEvent->CallbackParameter will contain 5
//
//  auto pVar =
//      dynamic_cast<ssbl::DevTiM5xxSkeleton::ScanData_TiM5xxSkeleton_Var *>(
//          pEvent->pComObj);
//  // access elements
//  int32_t startAngle =
//      pVar->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;
//  float scaleFactor =
//      pVar->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;
//
//  // for each beam / ray
//  for (uint32_t i = 0; i < pVar->Value_.aDataChannel16[0].uiLengthaData; ++i) {
//    uint16_t distance = pVar->Value_.aDataChannel16[0].aData[i];
//    uint16_t rssi = pVar->Value_.aDataChannel8[0].aData[i];
//  }
//
//  // It is your job to free the event date !!!
//  delete pEvent;
//}
