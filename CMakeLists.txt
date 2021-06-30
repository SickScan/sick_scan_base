cmake_minimum_required (VERSION 3.10)
project(sick_scan_base VERSION 0.0.3 LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMakeGeneral")


execute_process(COMMAND git rev-parse HEAD
  RESULT_VARIABLE
    GIT_CMD_RES
  WORKING_DIRECTORY 
    ${CMAKE_CURRENT_LIST_DIR}
  OUTPUT_VARIABLE
    GIT_REPOSITORY_VERSION
   
)
string(REGEX REPLACE "\n$" "" GIT_REPOSITORY_VERSION "${GIT_REPOSITORY_VERSION}")

set(TOP_DIR ${PROJECT_SOURCE_DIR})

## Contatins the libaray project
add_subdirectory(src)

