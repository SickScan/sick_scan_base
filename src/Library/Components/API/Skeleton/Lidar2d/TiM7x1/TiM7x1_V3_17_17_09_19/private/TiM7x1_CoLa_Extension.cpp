//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2d/TiM7x1/TiM7x1_V3_17_17_09_19/include/TiM7x1_CoLa_Extension.h"


namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanRange_t_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanRange_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanConfig_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		Serialize(pDest, rSrc.ScanRange , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, DateTime_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiYear , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.usiMonth , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.usiDay , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.usiHour , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.usiMinute , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.usiSec , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiUSec , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, FixString5& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,5, pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, DataChannelHdr_t_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.aContentType , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dScaleFactor , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dScaleOffset , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiAngleRes , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, DataOutputRange_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, DataOutputRange_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, DeviceBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiIdent , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiSerialNo , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.xbState[k],pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, StatusBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiTelegranCount , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiScanCount , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiSystemCountScan , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiSystemCountTransmit , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.xbInputs[k],pOffset);
		}
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.xbOutputs[k],pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiReserved , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, MeasurementParam1Block_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiMeasFreq , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aEncoderBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiEncoderPos , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.iEncoderSpeed , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aDataChannel16_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DataChannelHdr , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaData, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaData;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aDataChannel8_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DataChannelHdr , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaData, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaData;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aPositionBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.dXpos , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dYpos , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dZpos , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dXrot , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dYrot , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.dZrot , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.xbRotMode[k],pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, FlexString16& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,16, pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, FlexString128& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,128, pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aTimeBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DateTime , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, FixString4& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,4, pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_aEventBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.aEventType , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiEncoderPos , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.udiSystemCount , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diAngle , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanData_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiVersionNo , pOffset);
		Serialize(pDest, rSrc.DeviceBlock , pOffset);
		Serialize(pDest, rSrc.StatusBlock , pOffset);
		Serialize(pDest, rSrc.MeasurementParam1Block , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaEncoderBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaEncoderBlock;++k)
		{
			Serialize(pDest, rSrc.aEncoderBlock[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaDataChannel16, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDataChannel16;++k)
		{
			Serialize(pDest, rSrc.aDataChannel16[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaDataChannel8, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDataChannel8;++k)
		{
			Serialize(pDest, rSrc.aDataChannel8[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaPositionBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaPositionBlock;++k)
		{
			Serialize(pDest, rSrc.aPositionBlock[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaDeviceName, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDeviceName;++k)
		{
			Serialize(pDest, rSrc.aDeviceName[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaCommentBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaCommentBlock;++k)
		{
			Serialize(pDest, rSrc.aCommentBlock[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaTimeBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaTimeBlock;++k)
		{
			Serialize(pDest, rSrc.aTimeBlock[k], pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.uiLengthaEventBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaEventBlock;++k)
		{
			Serialize(pDest, rSrc.aEventBlock[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanConfig_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanConfig_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		Serialize(pDest, rSrc.ScanRange , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, RemDataConfig_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.bEnable , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.eDataType , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.eContentType , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, ScanDataConfig_t& rSrc, uint32_t* pOffset)
	{

		for(int32_t k=0;k<1;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.DistDataConfig[k],pOffset);
		}
		Serialize(pDest, rSrc.RemDataConfig , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaASerializer::Serialize(pDest, rSrc.EnableEncoderBlock[k],pOffset);
		}
		CoLaASerializer::Serialize(pDest, rSrc.bEnablePositionBlock , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.bEnableDeviceName , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.bEnableCommentBlock , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.bEnableTimeBlock , pOffset);
		CoLaASerializer::Serialize(pDest, rSrc.uiOutputInterval , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, FixString7& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,7, pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, SetScanConfig_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.ScanConfigParam , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, mStartMeasure_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, mStopMeasure_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, mSetDateTime_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DateTime , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, Run_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void TiM7x1_CoLaASerializer::Serialize(uint8_t* pDest, WriteEeprom_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.Success , pOffset);
	}


} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanRange_t_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanRange_t_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanConfig_t_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		Deserialize(pSrc, rDest.ScanRange , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, DateTime_t_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiYear , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.usiMonth , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.usiDay , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.usiHour , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.usiMinute , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.usiSec , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiUSec , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, FixString5& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],5, pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, DataChannelHdr_t_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.aContentType , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dScaleFactor , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dScaleOffset , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiAngleRes , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, DataOutputRange_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, DataOutputRange_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, DeviceBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiIdent , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiSerialNo , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.xbState[k],pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, StatusBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiTelegranCount , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiScanCount , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiSystemCountScan , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiSystemCountTransmit , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.xbInputs[k],pOffset);
		}
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.xbOutputs[k],pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiReserved , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, MeasurementParam1Block_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiMeasFreq , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aEncoderBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiEncoderPos , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.iEncoderSpeed , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aDataChannel16_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DataChannelHdr , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaData, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaData;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aDataChannel8_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DataChannelHdr , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaData, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaData;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aPositionBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.dXpos , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dYpos , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dZpos , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dXrot , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dYrot , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.dZrot , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.xbRotMode[k],pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, FlexString16& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,16 , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, FlexString128& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,128 , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aTimeBlock_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DateTime , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, FixString4& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],4, pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_aEventBlock_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.aEventType , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiEncoderPos , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.udiSystemCount , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diAngle , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanData_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiVersionNo , pOffset);
		Deserialize(pSrc, rDest.DeviceBlock , pOffset);
		Deserialize(pSrc, rDest.StatusBlock , pOffset);
		Deserialize(pSrc, rDest.MeasurementParam1Block , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaEncoderBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaEncoderBlock;++k)
		{
			Deserialize(pSrc, rDest.aEncoderBlock[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaDataChannel16, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDataChannel16;++k)
		{
			Deserialize(pSrc, rDest.aDataChannel16[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaDataChannel8, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDataChannel8;++k)
		{
			Deserialize(pSrc, rDest.aDataChannel8[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaPositionBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaPositionBlock;++k)
		{
			Deserialize(pSrc, rDest.aPositionBlock[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaDeviceName, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDeviceName;++k)
		{
			Deserialize(pSrc, rDest.aDeviceName[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaCommentBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaCommentBlock;++k)
		{
			Deserialize(pSrc, rDest.aCommentBlock[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaTimeBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaTimeBlock;++k)
		{
			Deserialize(pSrc, rDest.aTimeBlock[k], pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.uiLengthaEventBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaEventBlock;++k)
		{
			Deserialize(pSrc, rDest.aEventBlock[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanConfig_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanConfig_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		Deserialize(pSrc, rDest.ScanRange , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, RemDataConfig_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.bEnable , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.eDataType , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.eContentType , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, ScanDataConfig_t& rDest, uint32_t* pOffset)
	{

		for(int32_t k=0;k<1;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.DistDataConfig[k],pOffset);
		}
		Deserialize(pSrc, rDest.RemDataConfig , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaADeserializer::Deserialize(pSrc, rDest.EnableEncoderBlock[k],pOffset);
		}
		CoLaADeserializer::Deserialize(pSrc, rDest.bEnablePositionBlock , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.bEnableDeviceName , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.bEnableCommentBlock , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.bEnableTimeBlock , pOffset);
		CoLaADeserializer::Deserialize(pSrc, rDest.uiOutputInterval , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, FixString7& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],7, pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, SetScanConfig_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.ScanConfigParam , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, mStartMeasure_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, mStopMeasure_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, mSetDateTime_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DateTime , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, Run_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void TiM7x1_CoLaADeserializer::Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.Success , pOffset);
	}


} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl



namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanRange_t_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanRange_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanConfig_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		Serialize(pDest, rSrc.ScanRange , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, DateTime_t_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiYear , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.usiMonth , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.usiDay , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.usiHour , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.usiMinute , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.usiSec , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiUSec , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, FixString5& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,5, pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, DataChannelHdr_t_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.aContentType , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dScaleFactor , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dScaleOffset , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiAngleRes , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, DataOutputRange_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, DataOutputRange_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, DeviceBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiIdent , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiSerialNo , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.xbState[k],pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, StatusBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiTelegranCount , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiScanCount , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiSystemCountScan , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiSystemCountTransmit , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.xbInputs[k],pOffset);
		}
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.xbOutputs[k],pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiReserved , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, MeasurementParam1Block_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiMeasFreq , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aEncoderBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiEncoderPos , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.iEncoderSpeed , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aDataChannel16_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DataChannelHdr , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaData, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaData;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aDataChannel8_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DataChannelHdr , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaData, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaData;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aPositionBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.dXpos , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dYpos , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dZpos , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dXrot , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dYrot , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.dZrot , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.xbRotMode[k],pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, FlexString16& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,16, pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, FlexString128& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,128, pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aTimeBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DateTime , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, FixString4& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,4, pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_aEventBlock_struct_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.aEventType , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiEncoderPos , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.udiSystemCount , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diAngle , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanData_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiVersionNo , pOffset);
		Serialize(pDest, rSrc.DeviceBlock , pOffset);
		Serialize(pDest, rSrc.StatusBlock , pOffset);
		Serialize(pDest, rSrc.MeasurementParam1Block , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaEncoderBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaEncoderBlock;++k)
		{
			Serialize(pDest, rSrc.aEncoderBlock[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaDataChannel16, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDataChannel16;++k)
		{
			Serialize(pDest, rSrc.aDataChannel16[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaDataChannel8, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDataChannel8;++k)
		{
			Serialize(pDest, rSrc.aDataChannel8[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaPositionBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaPositionBlock;++k)
		{
			Serialize(pDest, rSrc.aPositionBlock[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaDeviceName, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaDeviceName;++k)
		{
			Serialize(pDest, rSrc.aDeviceName[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaCommentBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaCommentBlock;++k)
		{
			Serialize(pDest, rSrc.aCommentBlock[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaTimeBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaTimeBlock;++k)
		{
			Serialize(pDest, rSrc.aTimeBlock[k], pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.uiLengthaEventBlock, pOffset);
		for(int32_t k=0;k<rSrc.uiLengthaEventBlock;++k)
		{
			Serialize(pDest, rSrc.aEventBlock[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanConfig_aRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiAngleRes , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStartAngle , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanRange_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Serialize(pDest, rSrc.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanConfig_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.udiScanFreq , pOffset);
		Serialize(pDest, rSrc.ScanRange , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, RemDataConfig_struct_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.bEnable , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.eDataType , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.eContentType , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, ScanDataConfig_t& rSrc, uint32_t* pOffset)
	{

		for(int32_t k=0;k<1;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.DistDataConfig[k],pOffset);
		}
		Serialize(pDest, rSrc.RemDataConfig , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaBSerializer::Serialize(pDest, rSrc.EnableEncoderBlock[k],pOffset);
		}
		CoLaBSerializer::Serialize(pDest, rSrc.bEnablePositionBlock , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.bEnableDeviceName , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.bEnableCommentBlock , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.bEnableTimeBlock , pOffset);
		CoLaBSerializer::Serialize(pDest, rSrc.uiOutputInterval , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, FixString7& rSrc, uint32_t* pOffset)
	{
		SerializeFixString(pDest, rSrc.Text,7, pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, SetScanConfig_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.ScanConfigParam , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, mStartMeasure_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, mStopMeasure_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, mSetDateTime_t& rSrc, uint32_t* pOffset)
	{

		Serialize(pDest, rSrc.DateTime , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, Run_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void TiM7x1_CoLaBSerializer::Serialize(uint8_t* pDest, WriteEeprom_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.Success , pOffset);
	}


} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanRange_t_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanRange_t_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanConfig_t_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		Deserialize(pSrc, rDest.ScanRange , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, DateTime_t_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiYear , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.usiMonth , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.usiDay , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.usiHour , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.usiMinute , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.usiSec , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiUSec , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FixString5& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],5, pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, DataChannelHdr_t_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.aContentType , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dScaleFactor , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dScaleOffset , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiAngleRes , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, DataOutputRange_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, DataOutputRange_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, DeviceBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiIdent , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiSerialNo , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.xbState[k],pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, StatusBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiTelegranCount , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiScanCount , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiSystemCountScan , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiSystemCountTransmit , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.xbInputs[k],pOffset);
		}
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.xbOutputs[k],pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiReserved , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, MeasurementParam1Block_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiMeasFreq , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aEncoderBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiEncoderPos , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.iEncoderSpeed , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aDataChannel16_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DataChannelHdr , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaData, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaData;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aDataChannel8_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DataChannelHdr , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaData, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaData;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.aData[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aPositionBlock_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.dXpos , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dYpos , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dZpos , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dXrot , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dYrot , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.dZrot , pOffset);
		for(int32_t k=0;k<429496730;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.xbRotMode[k],pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FlexString16& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,16 , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FlexString128& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,128 , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aTimeBlock_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DateTime , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FixString4& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],4, pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_aEventBlock_struct_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.aEventType , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiEncoderPos , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.udiSystemCount , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diAngle , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanData_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiVersionNo , pOffset);
		Deserialize(pSrc, rDest.DeviceBlock , pOffset);
		Deserialize(pSrc, rDest.StatusBlock , pOffset);
		Deserialize(pSrc, rDest.MeasurementParam1Block , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaEncoderBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaEncoderBlock;++k)
		{
			Deserialize(pSrc, rDest.aEncoderBlock[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaDataChannel16, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDataChannel16;++k)
		{
			Deserialize(pSrc, rDest.aDataChannel16[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaDataChannel8, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDataChannel8;++k)
		{
			Deserialize(pSrc, rDest.aDataChannel8[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaPositionBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaPositionBlock;++k)
		{
			Deserialize(pSrc, rDest.aPositionBlock[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaDeviceName, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaDeviceName;++k)
		{
			Deserialize(pSrc, rDest.aDeviceName[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaCommentBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaCommentBlock;++k)
		{
			Deserialize(pSrc, rDest.aCommentBlock[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaTimeBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaTimeBlock;++k)
		{
			Deserialize(pSrc, rDest.aTimeBlock[k], pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLengthaEventBlock, pOffset);
		for(int32_t k=0;k<rDest.uiLengthaEventBlock;++k)
		{
			Deserialize(pSrc, rDest.aEventBlock[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanConfig_aRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiAngleRes , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStartAngle , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.diStopAngle , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanRange_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.uiLength , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			Deserialize(pSrc, rDest.aRange[k], pOffset);
		}
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanConfig_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.udiScanFreq , pOffset);
		Deserialize(pSrc, rDest.ScanRange , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, RemDataConfig_struct_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.bEnable , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.eDataType , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.eContentType , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, ScanDataConfig_t& rDest, uint32_t* pOffset)
	{

		for(int32_t k=0;k<1;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.DistDataConfig[k],pOffset);
		}
		Deserialize(pSrc, rDest.RemDataConfig , pOffset);
		for(int32_t k=0;k<1;++k)
		{
			CoLaBDeserializer::Deserialize(pSrc, rDest.EnableEncoderBlock[k],pOffset);
		}
		CoLaBDeserializer::Deserialize(pSrc, rDest.bEnablePositionBlock , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.bEnableDeviceName , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.bEnableCommentBlock , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.bEnableTimeBlock , pOffset);
		CoLaBDeserializer::Deserialize(pSrc, rDest.uiOutputInterval , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FixString7& rDest, uint32_t* pOffset)
	{
		DeserializeFixString(pSrc, &rDest.Text[0],7, pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, SetScanConfig_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.ScanConfigParam , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, mStartMeasure_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, mStopMeasure_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.ErrorCode , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, mSetDateTime_t& rDest, uint32_t* pOffset)
	{

		Deserialize(pSrc, rDest.DateTime , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, Run_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void TiM7x1_CoLaBDeserializer::Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.Success , pOffset);
	}


} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

