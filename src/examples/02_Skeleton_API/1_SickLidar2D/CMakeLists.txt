####################################################
#
# CMakeLists.txt for examples 
#
####################################################


cmake_minimum_required (VERSION 3.10)
project(ssbl-skeleton-api-examples)

include_directories(${PROJECT_SOURCE_DIR}/../../../library/src/Components)
include_directories(${PROJECT_SOURCE_DIR}/../../../library/include)
include_directories(${PROJECT_SOURCE_DIR}/../../ThirdParty)
include_directories(${PROJECT_SOURCE_DIR}/../../ThirdParty/toojpeg)

# FIX ME - add externals as libraries
set( TOO_JPEG_SRC
${PROJECT_SOURCE_DIR}/../../ThirdParty/toojpeg/toojpeg.cpp
)

set( TINY_XML_SRC
${PROJECT_SOURCE_DIR}/../../ThirdParty/tinyxml/tinystr.cpp
${PROJECT_SOURCE_DIR}/../../ThirdParty/tinyxml/tinyxml.cpp
${PROJECT_SOURCE_DIR}/../../ThirdParty/tinyxml/tinyxmlerror.cpp
${PROJECT_SOURCE_DIR}/../../ThirdParty/tinyxml/tinyxmlparser.cpp
)

# FIX ME - add small cmake function to create apps more easily
set( 01_TiM5xx_Getter_Setter_Access_SRC
  ${PROJECT_SOURCE_DIR}/01_TiM5xx_Getter_Setter_Access/Main.cpp 
)
add_executable(01_TiM5xx_Getter_Setter_Access ${01_TiM5xx_Getter_Setter_Access_SRC})
target_link_libraries(01_TiM5xx_Getter_Setter_Access ssbl::ssbl)

set( 02_TiM5xx_Raw_Access_SRC
  ${PROJECT_SOURCE_DIR}/02_TiM5xx_Raw_Access/Main.cpp 
)
add_executable(02_TiM5xx_Raw_Access ${02_TiM5xx_Raw_Access_SRC})
target_link_libraries(02_TiM5xx_Raw_Access ssbl::ssbl)

set( 03_TiM5xx_Scan_To_Jpeg_SRC
  ${PROJECT_SOURCE_DIR}/03_TiM5xx_Scan_To_Jpeg/Main.cpp 
  ${PROJECT_SOURCE_DIR}/03_TiM5xx_Scan_To_Jpeg/MainHelper.cpp
  ${PROJECT_SOURCE_DIR}/03_TiM5xx_Scan_To_Jpeg/LaunchParser/private/LaunchParser.cpp
  ${PROJECT_SOURCE_DIR}/03_TiM5xx_Scan_To_Jpeg/ParamHandle/private/ParamHandle.cpp
  ${TOO_JPEG_SRC}
  ${TINY_XML_SRC}
)
add_executable(03_TiM5xx_Scan_To_Jpeg ${03_TiM5xx_Scan_To_Jpeg_SRC})
target_link_libraries(03_TiM5xx_Scan_To_Jpeg ssbl::ssbl)
