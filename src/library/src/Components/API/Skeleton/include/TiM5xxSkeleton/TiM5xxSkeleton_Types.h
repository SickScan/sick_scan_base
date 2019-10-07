//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "Types/include/BasicTypes.h"

namespace ssbl {
namespace DevTiM5xxSkeleton {
#pragma pack(push, 1)
typedef struct {
  uint32_t udiAngleRes;
  int32_t diStartAngle;
  int32_t diStopAngle;
} ScanRange_t_aRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiLength;
  ScanRange_t_aRange_struct_t aRange[1];
} ScanRange_t_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiYear;
  uint8_t usiMonth;
  uint8_t usiDay;
  uint8_t usiHour;
  uint8_t usiMinute;
  uint8_t usiSec;
  uint32_t udiUSec;
} DateTime_t_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiScanFreq;
  ScanRange_t_t ScanRange;
} ScanConfig_t_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t Text[5];
} FixString5;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  FixString5 aContentType;
  float dScaleFactor;
  float dScaleOffset;
  int32_t diStartAngle;
  uint16_t uiAngleRes;
} DataChannelHdr_t_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiAngleRes;
  int32_t diStartAngle;
  int32_t diStopAngle;
} ScanConfig_aRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiLength;
  ScanConfig_aRange_struct_t aRange[1];
} ScanRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiScanFreq;
  ScanRange_struct_t ScanRange;
} ScanConfig_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiAngleRes;
  int32_t diStartAngle;
  int32_t diStopAngle;
} DataOutputRange_aRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiLength;
  DataOutputRange_aRange_struct_t aRange[1];
} DataOutputRange_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiIdent;
  uint32_t udiSerialNo;
  uint8_t xbState[2];
} DeviceBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiTelegranCount;
  uint16_t uiScanCount;
  uint32_t udiSystemCountScan;
  uint32_t udiSystemCountTransmit;
  uint8_t xbInputs[2];
  uint8_t xbOutputs[2];
  uint16_t uiReserved;
} StatusBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiScanFreq;
  uint32_t udiMeasFreq;
} MeasurementParam1Block_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint32_t udiEncoderPos;
  int16_t iEncoderSpeed;
} ScanData_aEncoderBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  DataChannelHdr_t_t DataChannelHdr;
  uint16_t uiLengthaData;
  uint16_t aData[811];
} ScanData_aDataChannel16_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  DataChannelHdr_t_t DataChannelHdr;
  uint16_t uiLengthaData;
  uint8_t aData[811];
} ScanData_aDataChannel8_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  float dXpos;
  float dYpos;
  float dZpos;
  float dXrot;
  float dYrot;
  float dZrot;
  uint8_t xbRotMode[1];
} ScanData_aPositionBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiLength;
  uint8_t Text[16];
} FlexString16;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiLength;
  uint8_t Text[128];
} FlexString128;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  DateTime_t_t DateTime;
} ScanData_aTimeBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t Text[4];
} FixString4;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  FixString4 aEventType;
  uint32_t udiEncoderPos;
  uint32_t udiSystemCount;
  int32_t diAngle;
} ScanData_aEventBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint16_t uiVersionNo;
  DeviceBlock_struct_t DeviceBlock;
  StatusBlock_struct_t StatusBlock;
  MeasurementParam1Block_struct_t MeasurementParam1Block;
  uint16_t uiLengthaEncoderBlock;
  ScanData_aEncoderBlock_struct_t aEncoderBlock[1];
  uint16_t uiLengthaDataChannel16;
  ScanData_aDataChannel16_struct_t aDataChannel16[2];
  uint16_t uiLengthaDataChannel8;
  ScanData_aDataChannel8_struct_t aDataChannel8[2];
  uint16_t uiLengthaPositionBlock;
  ScanData_aPositionBlock_struct_t aPositionBlock[1];
  uint16_t uiLengthaDeviceName;
  FlexString16 aDeviceName[1];
  uint16_t uiLengthaCommentBlock;
  FlexString128 aCommentBlock[1];
  uint16_t uiLengthaTimeBlock;
  ScanData_aTimeBlock_struct_t aTimeBlock[1];
  uint16_t uiLengthaEventBlock;
  ScanData_aEventBlock_struct_t aEventBlock[1];
} ScanData_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t bEnable;
  Enum8_t eDataType;
  Enum8_t eContentType;
} RemDataConfig_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t DistDataConfig[2];
  RemDataConfig_struct_t RemDataConfig;
  uint8_t EnableEncoderBlock[2];
  uint8_t bEnablePositionBlock;
  uint8_t bEnableDeviceName;
  uint8_t bEnableCommentBlock;
  uint8_t bEnableTimeBlock;
  uint16_t uiOutputInterval;
} ScanDataConfig_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t Text[7];
} FixString7;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  ScanConfig_t_t ScanConfigParam;
} SetScanConfig_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  Enum8_t ErrorCode;
} mStartMeasure_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  Enum8_t ErrorCode;
} mStopMeasure_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  DateTime_t_t DateTime;
} mSetDateTime_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t success;
} Run_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t Success;
} WriteEeprom_t;
#pragma pack(pop)

}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
