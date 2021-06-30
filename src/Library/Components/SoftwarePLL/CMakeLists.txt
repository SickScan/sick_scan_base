cmake_minimum_required (VERSION 3.10)

#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER  ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}") 
 
project(  ${LOCAL_PROJECT_NAME} 
          VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}" 
          LANGUAGES CXX)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)


ComponentSources(
  NAME SoftwarePLL
  SOURCES 
  SoftwarePLL.cpp
)

CreateLibraryTarget(
  BASE_NAME 
    ${BASE_NAME}
  COMPONENT_NAME
    ${COMPONENT_SUFFIX}
  COMPONENTS
    SoftwarePLL
)