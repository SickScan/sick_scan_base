cmake_minimum_required(VERSION 3.10)
#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)
set(COMPONENT_SUFFIX "${COMPONENT_SUFFIX}_skeleton")

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}")

project(${LOCAL_PROJECT_NAME}
VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
LANGUAGES CXX)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)

ComponentSources(
NAME ${COMPONENT_SUFFIX}
SOURCES
DL100.cpp
DL100_CoLa_Extension.cpp
DL100_Factory.cpp
DL100_Functions.cpp
DL100_Variables.cpp
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
set_source_files_properties(${PROJECT_SOURCE_DIR}/private/DL100.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)
set_source_files_properties(${PROJECT_SOURCE_DIR}/private/DL100_CoLa_Extension.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)
set_source_files_properties(${PROJECT_SOURCE_DIR}/private/DL100_Factory.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)
set_source_files_properties(${PROJECT_SOURCE_DIR}/private/DL100_Functions.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)
set_source_files_properties(${PROJECT_SOURCE_DIR}/private/DL100_Variables.cpp PROPERTIES COMPILE_FLAGS -Wno-type-limits)
endif()

CreateLibraryTarget(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
COMPONENTS
${COMPONENT_SUFFIX}
VS_SOLUTION_NAME
Skeleton/Lidar1d/DL100
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
SWIG/Skeleton/Lidar1d/DL100
DEPENDS
${BASE_NAME}::${COMPONENT_SUFFIX}::static)
