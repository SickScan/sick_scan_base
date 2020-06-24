//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_001/include/OLM200_Types.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"


namespace ssbl
{
namespace OLM200_V002_004_001_Skeleton
{
class OLM200_CoLaBSerializer : public CoLaBSerializer
{
public:
	OLM200_CoLaBSerializer(){};
	~OLM200_CoLaBSerializer(){};

	using::ssbl::CoLaBSerializer::Serialize;

	void Serialize(uint8_t* pDest, StoreParameterPage_t & rSrc, uint32_t* pOffset);
}; //OLM200_CoLaBSerializer

} // namespace OLM200
} // namespace ssbl


namespace ssbl
{
namespace OLM200_V002_004_001_Skeleton
{
class OLM200_CoLaBDeserializer : public CoLaBDeserializer
{
public:
	OLM200_CoLaBDeserializer(){};
	~OLM200_CoLaBDeserializer(){};

	using::ssbl::CoLaBDeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, StoreParameterPage_t& rDest, uint32_t* pOffset);
}; //OLM200_CoLaBDeserializer

} // namespace OLM200_V002_004_001_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace OLM200_V002_004_001_Skeleton
{
class OLM200_CoLaBProtocol : public CoLaBProtocol
{
public:
	OLM200_CoLaBProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaBProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~OLM200_CoLaBProtocol(){};
	private:
		OLM200_CoLaBSerializer Serializer_;
		OLM200_CoLaBDeserializer Deserializer_;
	};

} // namespace OLM200_V002_004_001_Skeleton
} // namespace ssbl

