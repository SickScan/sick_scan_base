cmake_minimum_required (VERSION 3.10)
project(ssbl-helpers)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/../../cmake")
include(SickBaseExtensions)

# Create GenerateDoxygenDocumentation target in case we find doxygen
# Note that dot.exe needs to be in path, too.
GenerateDocumentation()

#Find for all source and header files 
file (GLOB_RECURSE CLANG_FORMAT_SOURCES "${PROJECT_SOURCE_DIR}/../*.cpp" "${PROJECT_SOURCE_DIR}/../*.c" "${PROJECT_SOURCE_DIR}/../*.h" )

#Create BeautifyCode target in case we find clang-format
CreateClangFormatTarget(SOURCES ${CLANG_FORMAT_SOURCES})
  
