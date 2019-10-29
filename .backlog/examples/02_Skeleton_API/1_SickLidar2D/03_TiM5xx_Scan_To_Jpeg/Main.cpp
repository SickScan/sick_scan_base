/**
 * \file
 * \brief Laser Lidar communication example program
 *
 * Copyright (C) 2019, SICK AG, Waldkirch
 * Copyright (C) 2019, Ing.-Buero Dr. Michael Lehning, Hildesheim
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Osnabrück University nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *     * Neither the name of SICK AG nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission
 *     * Neither the name of Ing.-Buero Dr. Michael Lehning nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *      Authors:
 *         Michael Lehning <michael.lehning@lehning.de>
 *
 */
#include <iostream>

#include "LaunchParser/include/LaunchParser.h"
#include "MainHelper.h"
#include "ParamHandle/include/ParamHandle.h"
#include "SSBL.h"
#include "toojpeg.h"

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <math.h>

using namespace std;
using namespace ssbl;
using namespace DevTiM5xxSkeleton;

// Callback function which will be triggered when scan data arrives
void OnScan(uint64_t *pEventData);

const double DEG2RAD = 0.017453292;

double getDegrees(double angleInRad) {
  const double rad2deg = 180.0 / M_PI;
  return angleInRad * rad2deg;
};

typedef struct {
  int32_t startAngle;
  int32_t stopAngle;
  uint32_t resolution;
  std::string ipAddress;
} myScanConfig_t;

myScanConfig_t gScanConfig;

ParamHandle gParamHandle;

/* Keywords for parameters */
std::string paramKeyWords[] = {std::string("min_ang_deg"),
                               std::string("max_ang_deg"),
                               std::string("hostname")};
enum paramKeyWordEnum {
  MIN_ANG_DEG_KWRD,
  MAX_ANG_DEG_KWRD,
  HOSTNAME_KWRD,
  NUM_KWRD
};

inline bool ends_with(std::string const &value, std::string const &ending) {
  if (ending.size() > value.size()) {
    return false;
  }
  return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

bool parseInputAndLoadConfig(int argc, char *argv[]) {
  std::string tag;
  std::string val;
  bool ret = false;

  int launchArgcFileIdx = -1;
  for (int i = 1; i < argc; i++) {
    std::string extKey = ".launch";
    std::string s = argv[i];
    if (ends_with(s, extKey)) {
      launchArgcFileIdx = i;
      std::vector<std::string> tagList, typeList, valList;
      LaunchParser launchParser;
      ret = launchParser.parseFile(s, tagList, typeList, valList);
      if (ret == false) {
        return (ret);
      }
      for (size_t i = 0; i < tagList.size(); i++) {
        // printf("%-30s %-10s %-20s\n", tagList[i].c_str(),
        // typeList[i].c_str(), valList[i].c_str());
        gParamHandle.setParam(tagList[i], valList[i]);
      }
    } else {
      std::string s = argv[i];
      ret = LaunchParser::getTagVal(s, tag, val);
      if (ret) {
        int j;
        gParamHandle.setParam(tag, val);
        for (j = 0; j < NUM_KWRD; j++) {
          if (tag.compare(paramKeyWords[j]) == 0) {
            break;
          }
        }
        if (j == NUM_KWRD)  // not found
        {
          ret = false;
          printf("Unknown keyword %s\n", tag.c_str());
          printf("\n");
          printf("List of supported keywords:\n");
          printf("\n");
          for (int k = 0; k < NUM_KWRD; k++) {
            printf("%s\n", paramKeyWords[k].c_str());
          }
          printf("\n");
        }
      }
    }

    if (false == ret) {
      printf(
          "ERROR: Can interpret the argument %s neither as launch file name "
          "nor as argument in pattern <tag>:=<value>.\n",
          argv[i]);
      printf(
          "The launch-file must end with .launch and the tag/val-parameter "
          "must be given in pattern <tag>:=<value>.\n");
      printf("<tag> must be a valid keyword.\n");
      printf(
          "e.g. 5_scan_dump_example sick_tim_5xx.launch "
          "hostname:=192.168.0.61\n");
      exit(-1);
    }
  }

  return (true);
}

/*
  This example outlines the steps required to receive
  scan data from a SICK Laser Lidar using SSBL Raw API.
  1) Create a TiM5xxSkeleton Lidar object
  2) Connect to the Lidar
  3) Set up the scan configuration (eg. start and stop angle)
  4) Set up the scan output configuration (eg. start and stop angle)
  5) Put the Lidar into "Run" mode
  6) Register to the scan event
  7) Create an image every time we receive a scan event
*/

void dumpConfig(ParamHandle *pParamHandle, myScanConfig_t *gScanConfig) {
  printf("================================================================\n");
  printf("Configuration Settings\n");
  printf("================================================================\n");
  printf("\n");
  double minAng, maxAng;
  std::string ipAddress;
  pParamHandle->getParam(paramKeyWords[MIN_ANG_DEG_KWRD], minAng);
  pParamHandle->getParam(paramKeyWords[MAX_ANG_DEG_KWRD], maxAng);
  pParamHandle->getParam(paramKeyWords[HOSTNAME_KWRD], ipAddress);

  printf("Start Angle: %8.3lf [deg]\n", minAng);
  printf("Stop Angle : %8.3lf [deg]\n", maxAng);
  printf("IP Address : %s\n", ipAddress.c_str());
}

int main(int argc, char *argv[]) {
  mStartMeasure_TiM5xxSkeleton_Func
      startFunction;  // Function which puts the Lidar into measurement mode
  Run_TiM5xxSkeleton_Func
      runFunction;  // Function which puts the Lidar into run mode
  DataOutputRange_TiM5xxSkeleton_Var
      orVariable;  // Variable which contains start angle, stop angle and angle
                   // resolution
  ScanDataConfig_TiM5xxSkeleton_Var
      sdcVariable;  // Variable which contains the scan output configuration
  ScanData_TiM5xxSkeleton_Var scanDataVariable;  // Scan data variable
  std::vector<std::string> keys;

  printf("5_scan_dump_example\n");
  // Working directory is .../build/example

  bool dutInitialized = false;

  if (argc == 1) {
    printf(
        "Warning: Neither parameter specifications nor config file found. We "
        "recommend parameterization via config files.\n");
  }

  // Preset Default Values
  gParamHandle.setParam(paramKeyWords[MIN_ANG_DEG_KWRD], "-45.00");
  gParamHandle.setParam(paramKeyWords[MAX_ANG_DEG_KWRD], "225.00");
  gParamHandle.setParam(paramKeyWords[HOSTNAME_KWRD], "192.168.0.1");

  // Overwrite Default Values if the parameters are given via command line or
  // launch file
  parseInputAndLoadConfig(argc, argv);

  // Change this to your needs
  // TiM5xx in its native coordinate system supports a scan field from
  //-45 to 225 degrees (*10000 because it is set up in 1/10000° steps)

  double tmpAngle = 0.00;
  double tmpAngleInDeg = 0.00;
  std::string ipAddress;

  gParamHandle.getParam(paramKeyWords[MIN_ANG_DEG_KWRD], tmpAngleInDeg);
  gScanConfig.startAngle = (int32_t)round(10000.0 * tmpAngleInDeg);

  gParamHandle.getParam(paramKeyWords[MAX_ANG_DEG_KWRD], tmpAngleInDeg);
  gScanConfig.stopAngle = (int32_t)round(10000.0 * tmpAngleInDeg);

  gParamHandle.getParam(paramKeyWords[HOSTNAME_KWRD], ipAddress);

  dumpConfig(&gParamHandle, &gScanConfig);
  //===============================================================================
  // Step 1) Create a Lidar Skeleton (change the IP to your needs)
  //===============================================================================
  auto DUT = new TiM5xxSkeleton(ipAddress);
  dutInitialized = true;
  //===============================================================================
  // Step 2) Connect to the Lidar
  //===============================================================================
  if (SSBL_SUCCESS == DUT->Connect()) {
    //===============================================================================
    // Step 3) Read the output range currently employed by the device
    // Further details on PAGE 56!
    //===============================================================================
    if (SSBL_SUCCESS == DUT->ReadVariable(orVariable)) {
      printf("Angle resolution: %8.3lf degrees\n",
             (double)orVariable.Value_.aRange[0].udiAngleRes / 10000.00);

      printf("Start angle: %8.3lf degrees\n",
             (double)orVariable.Value_.aRange[0].diStartAngle / 10000.00);
      printf("Stop angle: %8.3lf degrees\n",
             (double)orVariable.Value_.aRange[0].diStopAngle / 10000.00);

      // Now let us change start and stop angle to get a scan from 0-90°.
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
    // Step 4) Read the scan output configuration from the device
    // Further details on PAGE 55!
    //===============================================================================
    if (SSBL_SUCCESS == DUT->ReadVariable(sdcVariable)) {
      sdcVariable.Value_.DistDataConfig[0] = 1;      // Enable output channel 1
      sdcVariable.Value_.DistDataConfig[1] = 0;      // (distance values)
      sdcVariable.Value_.RemDataConfig.bEnable = 1;  // Enable Remission / RSSI
      sdcVariable.Value_.RemDataConfig.eDataType = 0;  // 8Bit Remission values
      sdcVariable.Value_.RemDataConfig.eContentType =
          0;                                         // Digits there is no other
      sdcVariable.Value_.bEnableCommentBlock = 0;    // Comments? Pff
      sdcVariable.Value_.bEnableDeviceName = 0;      // No device name
      sdcVariable.Value_.bEnablePositionBlock = 1;   // include position data
      sdcVariable.Value_.bEnableTimeBlock = 1;       // include device timestamp
      sdcVariable.Value_.EnableEncoderBlock[0] = 0;  // no Encoder for TiM5xx
      sdcVariable.Value_.EnableEncoderBlock[1] = 0;  // no Encoder for TiM5xx

      sdcVariable.Value_.uiOutputInterval =
          1;  // no downsampling we want all scans
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

    if (SSBL_SUCCESS == DUT->DeregisterEvent("ScanData")) {
      // Sleep a while to see that there are no more incoming scans
      SSBL_Sleep(5000);
    }
    //===============================================================================
    // Disconnect from the Lidar
    //===============================================================================
  exit:
    if (dutInitialized) {
      DUT->Disconnect();
    }
  }

  delete DUT;

  return 0;
}

// Callback function which will be triggered when
// scan data arrives
void OnScan(uint64_t *pEventData) {
  ScanData_TiM5xxSkeleton_Var *pVar;
  SsblEventContainer *pEvent =
      reinterpret_cast<SsblEventContainer *>(pEventData);
  myScanConfig_t *pCfg =
      reinterpret_cast<myScanConfig_t *>(pEvent->CallbackParameter);

  printf("Received Event\n");
  printf("Scan start angle: %.2lf degrees\n",
         (double)pCfg->startAngle / 10000.00);
  printf("Scan stop angle: %.2lf degrees\n",
         (double)pCfg->stopAngle / 10000.00);

  pVar = dynamic_cast<ScanData_TiM5xxSkeleton_Var *>(pEvent->pComObj);

  int32_t startAngle =
      pVar->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;

  uint32_t resolution =
      pVar->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes;

  std::vector<Point> pointVec;
  int32_t pointNum = pVar->Value_.aDataChannel16[0].uiLengthaData;
  pointVec.resize(pointNum);

  /*
  memcpy(&scaleFactor, receiveBuffer + parseOff + 5, 4);
  memcpy(&scaleFactorOffset, receiveBuffer + parseOff + 9, 4);
  memcpy(&startAngleDiv10000, receiveBuffer + parseOff + 13, 4);
  memcpy(&sizeOfSingleAngularStepDiv10000, receiveBuffer + parseOff + 17, 2);
  memcpy(&numberOfItems, receiveBuffer + parseOff + 19, 2);

  rangePtr[idx] = (float) data[i] *  scaleFactor_001 + scaleFactorOffset;
  */

  float scaleFactor_001 =
      0.001F * pVar->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;
  float scaleFactorOffset_001 =
      0.001F * pVar->Value_.aDataChannel16[0]
                   .DataChannelHdr.dScaleOffset;  // Offset in [m]

  // convert to Cartesian coordinates in [m]
  for (uint16_t dIdx = 0; dIdx < pointNum; dIdx++) {
    double dist = pVar->Value_.aDataChannel16[0].aData[dIdx];

    dist = dist * scaleFactor_001 +
           scaleFactorOffset_001;  // Convert from distance units to [m]
    double angle = startAngle / 10000.0;
    angle = angle * DEG2RAD;
    angle -=
        M_PI /
        2.0;  // Working range diagram shows 90 degrees in direction of X-Axis
    pointVec[dIdx].X(dist * cos(angle));
    pointVec[dIdx].Y(dist * sin(angle));
    startAngle = startAngle + resolution;
  }

  DataExporter dataExporter;
  dataExporter.writeJpeg(
      &pointVec);  // write example jpeg file with top view of scan
  dataExporter.writeCSV(&pointVec);  // write csv file with shot information

  // please delete the data after processing
  delete pEventData;
}
