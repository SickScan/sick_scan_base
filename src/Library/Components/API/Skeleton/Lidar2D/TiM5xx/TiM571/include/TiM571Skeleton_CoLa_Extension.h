//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_Types.h"
#include "Base/Protocol/include/CoLa/CoLaADeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaASerializer.h"
#include "Base/Protocol/include/CoLa/CoLaAProtocol.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"


namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaASerializer : public CoLaASerializer
{
public:
	TiM571Skeleton_CoLaASerializer(){};
	~TiM571Skeleton_CoLaASerializer(){};

	using::ssbl::CoLaASerializer::Serialize;

	void Serialize(uint8_t* pDest, ScanRange_t_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanRange_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DateTime_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString5 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataChannelHdr_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataOutputRange_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataOutputRange_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DeviceBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, StatusBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, MeasurementParam1Block_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aEncoderBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aDataChannel16_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aDataChannel8_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aPositionBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FlexString16 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FlexString128 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aTimeBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString4 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aEventBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, RemDataConfig_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanDataConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString7 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, SetScanConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mStartMeasure_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mStopMeasure_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mSetDateTime_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, Run_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, WriteEeprom_t & rSrc, uint32_t* pOffset);
}; //TiM571Skeleton_CoLaASerializer

} // namespace DevTiM571Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaADeserializer : public CoLaADeserializer
{
public:
	TiM571Skeleton_CoLaADeserializer(){};
	~TiM571Skeleton_CoLaADeserializer(){};

	using::ssbl::CoLaADeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, ScanRange_t_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanRange_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DateTime_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString5& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataChannelHdr_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataOutputRange_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataOutputRange_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DeviceBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, StatusBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, MeasurementParam1Block_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aEncoderBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aDataChannel16_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aDataChannel8_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aPositionBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FlexString16& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FlexString128& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aTimeBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString4& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aEventBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, RemDataConfig_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanDataConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString7& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, SetScanConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mStartMeasure_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mStopMeasure_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mSetDateTime_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, Run_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset);
}; //TiM571Skeleton_CoLaADeserializer

} // namespace DevTiM571Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaAProtocol : public CoLaAProtocol
{
public:
	TiM571Skeleton_CoLaAProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaAProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~TiM571Skeleton_CoLaAProtocol(){};
	private:
		TiM571Skeleton_CoLaASerializer Serializer_;
		TiM571Skeleton_CoLaADeserializer Deserializer_;
	};

} // namespace DevTiM571Skeleton
} // namespace ssbl



namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaBSerializer : public CoLaBSerializer
{
public:
	TiM571Skeleton_CoLaBSerializer(){};
	~TiM571Skeleton_CoLaBSerializer(){};

	using::ssbl::CoLaBSerializer::Serialize;

	void Serialize(uint8_t* pDest, ScanRange_t_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanRange_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DateTime_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString5 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataChannelHdr_t_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataOutputRange_aRange_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DataOutputRange_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, DeviceBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, StatusBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, MeasurementParam1Block_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aEncoderBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aDataChannel16_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aDataChannel8_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aPositionBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FlexString16 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FlexString128 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aTimeBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString4 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_aEventBlock_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanData_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, RemDataConfig_struct_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, ScanDataConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FixString7 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, SetScanConfig_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mStartMeasure_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mStopMeasure_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, mSetDateTime_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, Run_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, WriteEeprom_t & rSrc, uint32_t* pOffset);
}; //TiM571Skeleton_CoLaBSerializer

} // namespace DevTiM571Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaBDeserializer : public CoLaBDeserializer
{
public:
	TiM571Skeleton_CoLaBDeserializer(){};
	~TiM571Skeleton_CoLaBDeserializer(){};

	using::ssbl::CoLaBDeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, ScanRange_t_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanRange_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DateTime_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString5& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataChannelHdr_t_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataOutputRange_aRange_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DataOutputRange_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, DeviceBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, StatusBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, MeasurementParam1Block_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aEncoderBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aDataChannel16_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aDataChannel8_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aPositionBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FlexString16& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FlexString128& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aTimeBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString4& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_aEventBlock_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanData_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, RemDataConfig_struct_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, ScanDataConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FixString7& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, SetScanConfig_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mStartMeasure_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mStopMeasure_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, mSetDateTime_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, Run_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset);
}; //TiM571Skeleton_CoLaBDeserializer

} // namespace DevTiM571Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_CoLaBProtocol : public CoLaBProtocol
{
public:
	TiM571Skeleton_CoLaBProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaBProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~TiM571Skeleton_CoLaBProtocol(){};
	private:
		TiM571Skeleton_CoLaBSerializer Serializer_;
		TiM571Skeleton_CoLaBDeserializer Deserializer_;
	};

} // namespace DevTiM571Skeleton
} // namespace ssbl

