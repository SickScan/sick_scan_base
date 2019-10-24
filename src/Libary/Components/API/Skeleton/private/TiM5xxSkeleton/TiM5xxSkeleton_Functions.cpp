//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Functions.h"
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Variables.h"

namespace ssbl {
namespace DevTiM5xxSkeleton {

SetScanConfig_TiM5xxSkeleton_Func::SetScanConfig_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_AR("SetScanConfig", "mLMPsetscancfg", 55,
                             LEVEL_INVALID) {}

mStartMeasure_TiM5xxSkeleton_Func::mStartMeasure_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NAR("mStartMeasure", "LMCstartmeas", 56,
                              LEVEL_AUTHORIZED_CLIENT) {}

mStopMeasure_TiM5xxSkeleton_Func::mStopMeasure_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NAR("mStopMeasure", "LMCstopmeas", 57,
                              LEVEL_AUTHORIZED_CLIENT) {}

mSetDateTime_TiM5xxSkeleton_Func::mSetDateTime_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_AR("mSetDateTime", "LSPsetdatetime", 63,
                             LEVEL_AUTHORIZED_CLIENT) {}

Run_TiM5xxSkeleton_Func::Run_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NAR("Run", "Run", 2, LEVEL_RUN) {}

WriteEeprom_TiM5xxSkeleton_Func::WriteEeprom_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NAR("WriteEeprom", "mEEwriteall", 7,
                              LEVEL_AUTHORIZED_CLIENT) {}

RebootDevice_TiM5xxSkeleton_Func::RebootDevice_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NANR("RebootDevice", "mSCreboot", 11,
                               LEVEL_AUTHORIZED_CLIENT) {}

LoadFactoryDefaults_TiM5xxSkeleton_Func::
    LoadFactoryDefaults_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NANR("LoadFactoryDefaults", "mSCloadfacdef", 12,
                               LEVEL_AUTHORIZED_CLIENT) {}

LoadApplicationDefaults_TiM5xxSkeleton_Func::
    LoadApplicationDefaults_TiM5xxSkeleton_Func()
    : TiM5xxSkeleton_Func_NANR("LoadApplicationDefaults", "mSCloadappdef", 13,
                               LEVEL_AUTHORIZED_CLIENT) {}

}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
