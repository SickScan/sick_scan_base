//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_003_005/include/OLM100_Types.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"


namespace ssbl
{
namespace OLM100_V002_003_005_Skeleton
{
class OLM100_CoLaBSerializer : public CoLaBSerializer
{
public:
	OLM100_CoLaBSerializer(){};
	~OLM100_CoLaBSerializer(){};

	using::ssbl::CoLaBSerializer::Serialize;

	void Serialize(uint8_t* pDest, StoreParameterPage_t & rSrc, uint32_t* pOffset);
}; //OLM100_CoLaBSerializer

} // namespace OLM100
} // namespace ssbl


namespace ssbl
{
namespace OLM100_V002_003_005_Skeleton
{
class OLM100_CoLaBDeserializer : public CoLaBDeserializer
{
public:
	OLM100_CoLaBDeserializer(){};
	~OLM100_CoLaBDeserializer(){};

	using::ssbl::CoLaBDeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, StoreParameterPage_t& rDest, uint32_t* pOffset);
}; //OLM100_CoLaBDeserializer

} // namespace OLM100_V002_003_005_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace OLM100_V002_003_005_Skeleton
{
class OLM100_CoLaBProtocol : public CoLaBProtocol
{
public:
	OLM100_CoLaBProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaBProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~OLM100_CoLaBProtocol(){};
	private:
		OLM100_CoLaBSerializer Serializer_;
		OLM100_CoLaBDeserializer Deserializer_;
	};

} // namespace OLM100_V002_003_005_Skeleton
} // namespace ssbl

