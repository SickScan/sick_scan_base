cmake_minimum_required (VERSION 3.10)
project(SickScanBase VERSION 0.0.1 LANGUAGES CXX)

## Contatins the libaray project
add_subdirectory(library/src)

## Contatins the example projects
add_subdirectory(examples)

## Contains the documentation
## and code beautifier
add_subdirectory(documentation)

## Contatins the device generator
if(EXISTS ${PROJECT_SOURCE_DIR}/generator)
add_subdirectory(generator)
endif()