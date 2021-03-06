####################################################
# CMakeLists.txt for examples 
####################################################

cmake_minimum_required (VERSION 3.10)

#Project name is set to folder name
get_filename_component(LOCAL_PROJECT_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" LOCAL_PROJECT_NAME ${LOCAL_PROJECT_NAME})
project(${LOCAL_PROJECT_NAME} 
VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
LANGUAGES CXX)

#Include the extension for CreateExampleTarget 
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(ExamplesExtensions)

#Specify source
list(APPEND APP_SOURCE
  ${PROJECT_SOURCE_DIR}/src/Main.cpp 
  ${PROJECT_SOURCE_DIR}/src/MainHelper.cpp
  ${PROJECT_SOURCE_DIR}/src/LaunchParser/private/LaunchParser.cpp
  ${PROJECT_SOURCE_DIR}/src/ParamHandle/private/ParamHandle.cpp
)


CreateExampleTarget(
  EXAMPLE_NAME
    ${LOCAL_PROJECT_NAME}
  EXAMPLE_SOURCES
    ${APP_SOURCE}
  VS_SOLUTION_NAME
    ${EXAMPLES_SOLUTION_FOLDER}
  ADDITIONAL_LIBRARIES
    tinyxml::tinyxml
    toojpeg::toojpeg
    ssbl::tim5x1_v3_17_17_09_19_skeleton::static
)