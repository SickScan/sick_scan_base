//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "Base/Types/include/BasicTypes.h"

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{
#pragma pack(push, 1)
typedef struct 
{
	uint32_t	udiAngleRes;
	int32_t	diStartAngle;
	int32_t	diStopAngle;
} DataOutputRange_aRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint16_t	uiLength;
	uint16_t uiLengthaRange;
	DataOutputRange_aRange_struct_t	aRange[0];
} DataOutputRange_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint16_t	uiIdent;
	uint32_t	udiSerialNo;
	uint8_t 	xbState[1];
} DeviceBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint16_t	uiTelegranCount;
	uint16_t	uiScanCount;
	uint32_t	udiSystemCountScan;
	uint32_t	udiSystemCountTransmit;
	uint8_t 	xbInputs[32185202];
	uint8_t 	xbOutputs[32185202];
	uint16_t	uiReserved;
} StatusBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint32_t	udiScanFreq;
	uint32_t	udiMeasFreq;
} MeasurementParam1Block_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint32_t	udiEncoderPos;
	int16_t	iEncoderSpeed;
} ScanData_aEncoderBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	DataChannelHdr_t_t	DataChannelHdr;
	uint16_t uiLengthaData;
	uint16_t	aData[0];
} ScanData_aDataChannel16_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	DataChannelHdr_t_t	DataChannelHdr;
	uint16_t uiLengthaData;
	uint8_t	aData[0];
} ScanData_aDataChannel8_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	float	dXpos;
	float	dYpos;
	float	dZpos;
	float	dXrot;
	float	dYrot;
	float	dZrot;
	uint8_t 	xbRotMode[32185202];
} ScanData_aPositionBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	 uint16_t uiLength;
	uint8_t Text[0];
} FlexString0;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	DateTime_t_t	DateTime;
} ScanData_aTimeBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	FlexString0	aEventType;
	uint32_t	udiEncoderPos;
	uint32_t	udiSystemCount;
	int32_t	diAngle;
} ScanData_aEventBlock_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint16_t	uiVersionNo;
	DeviceBlock_struct_t	DeviceBlock;
	StatusBlock_struct_t	StatusBlock;
	MeasurementParam1Block_struct_t	MeasurementParam1Block;
	uint16_t uiLengthaEncoderBlock;
	ScanData_aEncoderBlock_struct_t	aEncoderBlock[0];
	uint16_t uiLengthaDataChannel16;
	ScanData_aDataChannel16_struct_t	aDataChannel16[0];
	uint16_t uiLengthaDataChannel8;
	ScanData_aDataChannel8_struct_t	aDataChannel8[0];
	uint16_t uiLengthaPositionBlock;
	ScanData_aPositionBlock_struct_t	aPositionBlock[0];
	uint16_t uiLengthaDeviceName;
	FlexString0	aDeviceName[0];
	uint16_t uiLengthaCommentBlock;
	FlexString0	aCommentBlock[0];
	uint16_t uiLengthaTimeBlock;
	ScanData_aTimeBlock_struct_t	aTimeBlock[0];
	uint16_t uiLengthaEventBlock;
	ScanData_aEventBlock_struct_t	aEventBlock[0];
} ScanData_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint32_t	udiAngleRes;
	int32_t	diStartAngle;
	int32_t	diStopAngle;
} ScanConfig_aRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint16_t	uiLength;
	uint16_t uiLengthaRange;
	ScanConfig_aRange_struct_t	aRange[0];
} ScanRange_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint32_t	udiScanFreq;
	ScanRange_struct_t	ScanRange;
} ScanConfig_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	bEnable;
	Enum8_t	eDataType;
	Enum8_t	eContentType;
} RemDataConfig_struct_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t 	DistDataConfig[1];
	RemDataConfig_struct_t	RemDataConfig;
	uint8_t 	EnableEncoderBlock[1];
	uint8_t	bEnablePositionBlock;
	uint8_t	bEnableDeviceName;
	uint8_t	bEnableCommentBlock;
	uint8_t	bEnableTimeBlock;
	uint16_t	uiOutputInterval;
} ScanDataConfig_t;
#pragma pack(pop)


} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

