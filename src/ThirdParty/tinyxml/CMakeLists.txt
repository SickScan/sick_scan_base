cmake_minimum_required (VERSION 3.10)
project(tinyxml)

set(LIB_NAME "tinyxml")

set(LIB_SRC 
  ${PROJECT_SOURCE_DIR}/src/tinyxml.cpp
  ${PROJECT_SOURCE_DIR}/src/tinystr.cpp
  ${PROJECT_SOURCE_DIR}/src/tinyxmlerror.cpp
  ${PROJECT_SOURCE_DIR}/src/tinyxmlparser.cpp
)

add_library(${LIB_NAME} STATIC ${LIB_SRC})

add_library(tinyxml::tinyxml ALIAS ${LIB_NAME} )


target_include_directories(${LIB_NAME}
  PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)


set_target_properties (${LIB_NAME} PROPERTIES FOLDER ${EXT_LIB_SOLUTION_FOLDER}/tinyxml)