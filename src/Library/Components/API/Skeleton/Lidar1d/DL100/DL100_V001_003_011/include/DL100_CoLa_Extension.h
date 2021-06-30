//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_011/include/DL100_Types.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"


namespace ssbl
{
namespace DL100_V001_003_011_Skeleton
{
class DL100_CoLaBSerializer : public CoLaBSerializer
{
public:
	DL100_CoLaBSerializer(){};
	~DL100_CoLaBSerializer(){};

	using::ssbl::CoLaBSerializer::Serialize;

	void Serialize(uint8_t* pDest, storeParameterPage_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, FlexString502 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, getDebugData_t & rSrc, uint32_t* pOffset);
}; //DL100_CoLaBSerializer

} // namespace DL100
} // namespace ssbl


namespace ssbl
{
namespace DL100_V001_003_011_Skeleton
{
class DL100_CoLaBDeserializer : public CoLaBDeserializer
{
public:
	DL100_CoLaBDeserializer(){};
	~DL100_CoLaBDeserializer(){};

	using::ssbl::CoLaBDeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, storeParameterPage_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, FlexString502& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, getDebugData_t& rDest, uint32_t* pOffset);
}; //DL100_CoLaBDeserializer

} // namespace DL100_V001_003_011_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DL100_V001_003_011_Skeleton
{
class DL100_CoLaBProtocol : public CoLaBProtocol
{
public:
	DL100_CoLaBProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaBProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~DL100_CoLaBProtocol(){};
	private:
		DL100_CoLaBSerializer Serializer_;
		DL100_CoLaBDeserializer Deserializer_;
	};

} // namespace DL100_V001_003_011_Skeleton
} // namespace ssbl

