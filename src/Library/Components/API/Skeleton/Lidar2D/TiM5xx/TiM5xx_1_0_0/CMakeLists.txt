cmake_minimum_required(VERSION 3.10)
#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}")

project(${LOCAL_PROJECT_NAME}
VERSION "${SSBL_MAJOR}.${SSBL_MINOR}.${SSBL_REVISION}"
LANGUAGES CXX)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)

ComponentSources(
NAME ${COMPONENT_SUFFIX}-skeleton
SOURCES
TiM5xx.cpp
TiM5xx_CoLa_Extension.cpp
TiM5xx_Factory.cpp
TiM5xx_Functions.cpp
TiM5xx_Variables.cpp
)

CreateLibraryTarget(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
COMPONENTS
${COMPONENT_SUFFIX}-skeleton
VS_SOLUTION_NAME
Skeleton/Lidar2D/TiM5xx
DEPENDS
base)
