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
#include "SSBL.h"

using namespace std;
using namespace ssbl;
using namespace TiM5x1_V3_17_17_09_19_Skeleton;

// Callback function which will be triggered when scan data arrives
void OnScan(uint64_t *pEventData);

typedef struct {
  int32_t startAngle;
  int32_t stopAngle;
  uint32_t resolution;
} myScanConfig_t;

myScanConfig_t gScanConfig;

/*
  This example outlines the steps required to receive
  scan data from a SICK 2D Lidar using SSBL Raw API.
  1) Create a TiM5xxSkeleton object
  2) Connect to the Lidar
  3) Set up the scan configuration (eg. start and stop angle)
  4) Set up the scan output configuration (eg. start and stop angle)
  5) Put the Lidar into "Run" mode
  6) Register to the scan event
  7) Create an image every time we receive a scan event
*/

int main(void) {
  mStartMeasure_TiM5x1_Func
      startFunction;  // Function which puts the Lidar into measurement mode
  Run_TiM5x1_Func runFunction;  // Function which puts the Lidar into run mode
  DataOutputRange_TiM5x1_Var
      orVariable;  // Variable which contains start angle, stop angle and angle
                   // resolution
  ScanDataConfig_TiM5x1_Var
      sdcVariable;  // Variable which contains the scan output configuration
  ScanData_TiM5x1_Var scanDataVariable;  // Scan data variable
#ifndef USE_CALLBACK
  timespec x, y;
  VariableEventQueue *pEventQueue = NULL;
#endif

  // Change this to your needs
  // TiM5xx in its native coordinate system supports a scan field from
  //-45 to 225 degrees (*10000 because it is set up in 1/10000� steps)
  gScanConfig.startAngle = 0;
  gScanConfig.stopAngle = 90 * 10000;

  //===============================================================================
  // Step 1) Create a Lidar Skeleton (change the IP to your needs)
  //===============================================================================
  auto DUT = new TiM5x1("192.168.100.235");

  //===============================================================================
  // Step 2) Connect to the Lidar
  //===============================================================================
  if (SSBL_SUCCESS == DUT->Connect()) {
    //===============================================================================
    // Step 3) Read the output range currently employed by the device
    // Further details on PAGE 56!
    //===============================================================================
    if (SSBL_SUCCESS == DUT->ReadVariable(orVariable)) {
      printf("Angle resolution: %.3lf degrees\n",
             (double)orVariable.Value_.aRange[0].udiAngleRes / 10000.00);

      printf("Start angle: %.2lf degrees\n",
             (double)orVariable.Value_.aRange[0].diStartAngle / 10000.00);
      printf("Stop angle: %.2lf degrees\n",
             (double)orVariable.Value_.aRange[0].diStopAngle / 10000.00);

      // Now let us change start and stop angle to get a scan from 0-90�.
      // Note that the Lidar specific coordinate system is used in here.
      // Note angle resolution can not be changed for TiM5xx
      orVariable.Value_.aRange[0].diStartAngle = gScanConfig.startAngle;
      orVariable.Value_.aRange[0].diStopAngle = gScanConfig.stopAngle;
      if (SSBL_SUCCESS == DUT->WriteVariable(orVariable)) {
        // Set the variable to some different value to observe that it has
        // really been written from the device
        orVariable.Value_.aRange[0].diStartAngle = 1;
        orVariable.Value_.aRange[0].diStopAngle = 1;
        if ((SSBL_SUCCESS != DUT->ReadVariable(orVariable)) ||
            (gScanConfig.startAngle !=
             orVariable.Value_.aRange[0].diStartAngle) ||
            (gScanConfig.stopAngle != orVariable.Value_.aRange[0].diStopAngle))

        {
          printf("Error reading outputRange from the device");
          goto exit;
        } else {
          // Now you could store this configuration. Note that the embedded
          // flash might have limited number of write cycles. Therefore, one
          // should only store parameters if it's required.
        }
      } else {
        if (SSBL_SUCCESS != DUT->ReadVariable(orVariable)) {
          printf("Error while setting the scan range");
          goto exit;
        }
      }
    }

    //===============================================================================
    // Step 4) Read the scan output configuration from the device, do some
    // changes and write back Further details on PAGE 55!
    //===============================================================================
    if (SSBL_SUCCESS == DUT->ReadVariable(sdcVariable)) {
      sdcVariable.Value_.DistDataConfig[0] = 1;      // Enable output channel 1
      sdcVariable.Value_.DistDataConfig[1] = 0;      // (distance values)
      sdcVariable.Value_.RemDataConfig.bEnable = 1;  // Enable Remission / RSSI
      sdcVariable.Value_.RemDataConfig.eDataType = 0;  // 8Bit Remission values
      sdcVariable.Value_.RemDataConfig.eContentType =
          0;                                         // Digits there is no other
      sdcVariable.Value_.bEnableCommentBlock = 0;    // No comments plz
      sdcVariable.Value_.bEnableDeviceName = 0;      // No device name
      sdcVariable.Value_.bEnablePositionBlock = 1;   // include position data
      sdcVariable.Value_.bEnableTimeBlock = 1;       // include device timestamp
      sdcVariable.Value_.EnableEncoderBlock[0] = 0;  // no Encoder for TiM5xx
      sdcVariable.Value_.EnableEncoderBlock[1] = 0;  // no Encoder for TiM5xx

      sdcVariable.Value_.uiOutputInterval =
          1;  // disable down sampling -  we want all scans
      if (SSBL_SUCCESS != DUT->WriteVariable(sdcVariable)) {
        printf("Error while setting the scan output configuration");
        goto exit;
      }
    }

    //===============================================================================
    // Step 5.1) Put the Lidar to measurement mode
    // Further details on PAGE 32!
    //===============================================================================
    if (SSBL_SUCCESS != DUT->CallFunction(startFunction)) {
      printf("Error when trying to put the Lidar into measurement mode");
      goto exit;
    }

    //===============================================================================
    // Step 5.2) Put the Lidar to run mode
    // Further details on PAGE 53!
    //===============================================================================
    if (SSBL_SUCCESS != DUT->CallFunction(runFunction)) {
      printf("Error when trying to put the Lidar into run mode");
      goto exit;
    }

    //===============================================================================
    // Step 6) Register to scan events, OnScan is a callback function that will
    // be called as soon as the event arrives. You can add 32 bits user data
    // which shall be available when the callback is triggered. For now, we
    // simply add the scan config. Further details on PAGE 63!
    //===============================================================================
#ifdef USE_CALLBACK

    if (SSBL_SUCCESS !=
        DUT->RegisterEvent("ScanData", OnScan,
                           reinterpret_cast<uint64_t>(&gScanConfig))) {
      printf("Error when trying to register to scan events");
      goto exit;
    }

    //===============================================================================
    // Lets loop around to observe some scan events
    //===============================================================================
    SSBL_Sleep(5000);
#else

    if (SSBL_SUCCESS != DUT->RegisterEvent("ScanData", &pEventQueue, 2)) {
      printf("Error when trying to register to scan events");
      goto exit;
    }
    x = SSBL_GetTimestamp();
    y = x;

    while (x.tv_sec < (y.tv_sec + 2)) {
      std::shared_ptr<ComObj> pEvent = pEventQueue->Wait(0xFFFFFFFF);
      if (NULL != pEvent) {
        cout << "Event" << endl;
        pEventQueue->Release(pEvent);
      }
      x = SSBL_GetTimestamp();
    }
#endif

    if (SSBL_SUCCESS == DUT->DeregisterEvent("ScanData")) {
      SSBL_Sleep(2000);
    }

#ifndef USE_CALLBACK
    delete pEventQueue;
#endif

    //===============================================================================
    // Disconnect from the Lidar
    //===============================================================================
  exit:
    DUT->Disconnect();
  }

  delete DUT;

  return 0;
}

// Callback function which will be triggered when
// scan data arrives
void OnScan(uint64_t *pEventData) {
  ScanData_TiM5x1_Var *pVar;
  SsblEventContainer *pEvent =
      reinterpret_cast<SsblEventContainer *>(pEventData);
  myScanConfig_t *pCfg =
      reinterpret_cast<myScanConfig_t *>(pEvent->CallbackParameter);

  printf("Received Event\n");
  printf("Scan start angle: %.2lf degrees\n",
         (double)pCfg->startAngle / 10000.00);
  printf("Scan stop angle: %.2lf degrees\n",
         (double)pCfg->stopAngle / 10000.00);

  pVar = dynamic_cast<ScanData_TiM5x1_Var *>(pEvent->pComObj);

  // please delete the data after processing
  delete pEventData;
}
