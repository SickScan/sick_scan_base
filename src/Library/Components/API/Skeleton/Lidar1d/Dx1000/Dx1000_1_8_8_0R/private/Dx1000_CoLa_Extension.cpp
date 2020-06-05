//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_CoLa_Extension.h"


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaBSerializer::Serialize(uint8_t* pDest, FlexString0& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,0, pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaBDeserializer::Deserialize(uint8_t* pSrc, FlexString0& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,0 , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl



namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaASerializer::Serialize(uint8_t* pDest, FlexString0& rSrc, uint32_t* pOffset)
	{
		SerializeFlexString(pDest, rSrc.Text, rSrc.uiLength,0, pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
	void Dx1000_CoLaADeserializer::Deserialize(uint8_t* pSrc, FlexString0& rDest, uint32_t* pOffset)
	{
		DeserializeFlexString(pSrc, &rDest.Text[0],&rDest.uiLength,0 , pOffset);
	}


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

