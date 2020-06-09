//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Types.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"
#include "Base/Protocol/include/CoLa/CoLaADeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaASerializer.h"
#include "Base/Protocol/include/CoLa/CoLaAProtocol.h"


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaBSerializer : public CoLaBSerializer
{
public:
	Dx1000_CoLaBSerializer(){};
	~Dx1000_CoLaBSerializer(){};

	using::ssbl::CoLaBSerializer::Serialize;

	void Serialize(uint8_t* pDest, FlexString32 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, WriteEeprom_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, enableMeasurementLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, disableMeasurementLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, enablePilotLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, disablePilotLaser_t & rSrc, uint32_t* pOffset);
}; //Dx1000_CoLaBSerializer

} // namespace Dx1000
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaBDeserializer : public CoLaBDeserializer
{
public:
	Dx1000_CoLaBDeserializer(){};
	~Dx1000_CoLaBDeserializer(){};

	using::ssbl::CoLaBDeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, FlexString32& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, enableMeasurementLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, disableMeasurementLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, enablePilotLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, disablePilotLaser_t& rDest, uint32_t* pOffset);
}; //Dx1000_CoLaBDeserializer

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaBProtocol : public CoLaBProtocol
{
public:
	Dx1000_CoLaBProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaBProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~Dx1000_CoLaBProtocol(){};
	private:
		Dx1000_CoLaBSerializer Serializer_;
		Dx1000_CoLaBDeserializer Deserializer_;
	};

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl



namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaASerializer : public CoLaASerializer
{
public:
	Dx1000_CoLaASerializer(){};
	~Dx1000_CoLaASerializer(){};

	using::ssbl::CoLaASerializer::Serialize;

	void Serialize(uint8_t* pDest, FlexString32 & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, WriteEeprom_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, enableMeasurementLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, disableMeasurementLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, enablePilotLaser_t & rSrc, uint32_t* pOffset);
	void Serialize(uint8_t* pDest, disablePilotLaser_t & rSrc, uint32_t* pOffset);
}; //Dx1000_CoLaASerializer

} // namespace Dx1000
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaADeserializer : public CoLaADeserializer
{
public:
	Dx1000_CoLaADeserializer(){};
	~Dx1000_CoLaADeserializer(){};

	using::ssbl::CoLaADeserializer::Deserialize;

	void Deserialize(uint8_t* pSrc, FlexString32& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, enableMeasurementLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, disableMeasurementLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, enablePilotLaser_t& rDest, uint32_t* pOffset);
	void Deserialize(uint8_t* pSrc, disablePilotLaser_t& rDest, uint32_t* pOffset);
}; //Dx1000_CoLaADeserializer

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_CoLaAProtocol : public CoLaAProtocol
{
public:
	Dx1000_CoLaAProtocol(AddressingMode AddrMode,size_t txBufSize, size_t rxBufSize)
		:CoLaAProtocol(AddrMode, txBufSize, rxBufSize)
	{
		pSerializer_ = &Serializer_;
		pDeserializer_ = &Deserializer_;
	};
	~Dx1000_CoLaAProtocol(){};
	private:
		Dx1000_CoLaASerializer Serializer_;
		Dx1000_CoLaADeserializer Deserializer_;
	};

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

