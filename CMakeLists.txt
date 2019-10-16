cmake_minimum_required (VERSION 3.10)
project(sick_scan_base VERSION 0.0.1 LANGUAGES CXX)



## Contatins the libaray project
add_subdirectory(src)

## Contatins the device generator
if(EXISTS ${PROJECT_SOURCE_DIR}/generator)
add_subdirectory(generator)
endif()