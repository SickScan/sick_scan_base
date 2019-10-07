####################################################
#
# CMakeLists.txt for examples 
#
####################################################


cmake_minimum_required (VERSION 3.10)
project(ssbl-family-api-examples)

include_directories(${PROJECT_SOURCE_DIR}/../../../library/src/Components)
include_directories(${PROJECT_SOURCE_DIR}/../../../library/include)


set( TIM5XX_DEMO_SRC
  ${PROJECT_SOURCE_DIR}/01_TiM5xx/Main.cpp 
)


add_executable(01_TiM5xx ${TIM5XX_DEMO_SRC})
target_link_libraries(01_TiM5xx ssbl::ssbl)
