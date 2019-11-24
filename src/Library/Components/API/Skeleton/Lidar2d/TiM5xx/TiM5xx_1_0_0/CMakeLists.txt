cmake_minimum_required(VERSION 3.10)
#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)
set(COMPONENT_SUFFIX "${COMPONENT_SUFFIX}_skeleton")

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}")

project(${LOCAL_PROJECT_NAME}
VERSION "${SSBL_MAJOR}.${SSBL_MINOR}.${SSBL_REVISION}"
LANGUAGES CXX)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)

ComponentSources(
NAME ${COMPONENT_SUFFIX}
SOURCES
TiM5xx.cpp
TiM5xx_CoLa_Extension.cpp
TiM5xx_Factory.cpp
TiM5xx_Functions.cpp
TiM5xx_Variables.cpp
)

set_source_files_properties(${PROJECT_SOURCE_DIR}/private/TiM5xx_Variables.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)


CreateLibraryTarget(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
COMPONENTS
${COMPONENT_SUFFIX}
VS_SOLUTION_NAME
Skeleton/Lidar2d/TiM5xx
DEPENDS
base)

CreateSwigTargets(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
MODULE_SUFFIX
skeleton
VS_SOLUTION_FOLDER
SWIG/Skeleton/Lidar2d/TiM5xx
DEPENDS
${BASE_NAME}::${COMPONENT_SUFFIX}::static)
