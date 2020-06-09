//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_CoLa_Extension.h"


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, FlexString32& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,32, pOffset);
	}

	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, WriteEeprom_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.Success , pOffset);
	}

	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, enableMeasurementLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, disableMeasurementLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, enablePilotLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, disablePilotLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FlexString32& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,32 , pOffset);
	}

	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.Success , pOffset);
	}

	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, enableMeasurementLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, disableMeasurementLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, enablePilotLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, disablePilotLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl



namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, FlexString32& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,32, pOffset);
	}

	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, WriteEeprom_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.Success , pOffset);
	}

	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, enableMeasurementLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, disableMeasurementLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, enablePilotLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.success , pOffset);
	}

	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, disablePilotLaser_t& rSrc, uint32_t* pOffset)
	{

		CoLaASerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, FlexString32& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,32 , pOffset);
	}

	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, WriteEeprom_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.Success , pOffset);
	}

	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, enableMeasurementLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, disableMeasurementLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, enablePilotLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}

	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, disablePilotLaser_t& rDest, uint32_t* pOffset)
	{

		CoLaADeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

