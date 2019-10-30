#include "Core/Sensor/include/Common/SickSensorInterface.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SickSensorInterface::SickSensorInterface() : pDesc_(nullptr) {
  ProvideCallbackEvent("OnReceive");
};
