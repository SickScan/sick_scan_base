

set(SSBL_MAJOR    "0")
set(SSBL_MINOR    "0")
set(SSBL_REVISION "2")


# Version Info 
configure_file(${TOP_DIR}/cmake/VersionInfo.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/VersionInfo.h)
  
  

add_subdirectory(Components)