####################################################
#
# CMakeLists.txt for examples 
#
####################################################


cmake_minimum_required (VERSION 3.10)
project(ssbl-family-api-examples)

include_directories(${PROJECT_SOURCE_DIR}/../../library/Components)
include_directories(${PROJECT_SOURCE_DIR}/../../library/include)


set( TIM5XX_DEMO_SRC
  ${PROJECT_SOURCE_DIR}/src/Main.cpp 
)


add_executable(${CMAKE_PROJECT_NAME} ${TIM5XX_DEMO_SRC})
target_link_libraries(${CMAKE_PROJECT_NAME} ssbl::ssbl)
