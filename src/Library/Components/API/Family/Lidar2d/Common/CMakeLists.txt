cmake_minimum_required(VERSION 3.10)
#Project suffix is set to folder name
set(COMPONENT_SUFFIX "lidar2d")

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}")

project(${LOCAL_PROJECT_NAME}
VERSION "${SSBL_MAJOR}.${SSBL_MINOR}.${SSBL_REVISION}"
LANGUAGES CXX)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}  "${TOP_DIR}/cmake")
include(LibraryTargetExtension)

ComponentSources(
NAME ${COMPONENT_SUFFIX}
SOURCES
Lidar2d.cpp
Lidar2d_Model.cpp
TiM5xx_Skeleton_Factory.cpp
TiM5xx_Model_Factory.cpp

)


CreateLibraryTarget(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
COMPONENTS
${COMPONENT_SUFFIX}
VS_SOLUTION_NAME
Family/Lidar2d
DEPENDS
tim5xx_1_0_0_skeleton
tim5xx_1_0_0_model
)
