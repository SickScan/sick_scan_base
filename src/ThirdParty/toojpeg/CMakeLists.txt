cmake_minimum_required (VERSION 3.10)
project(toojpeg)

set(LIB_NAME "toojpeg")
set(LIB_SRC ${PROJECT_SOURCE_DIR}/src/toojpeg.cpp)

add_library(${LIB_NAME} STATIC ${LIB_SRC})

add_library(toojpeg::toojpeg ALIAS ${LIB_NAME} )


target_include_directories(${LIB_NAME}
  PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)


set_target_properties (${LIB_NAME} PROPERTIES FOLDER ${EXT_LIB_SOLUTION_FOLDER}/toojpeg)


if (WIN32)
  if(MSVC)

  else()
  endif()
else()
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    if("${SSBL_32BIT}" )
      target_compile_options(${LIB_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-m32>")
      target_compile_options(${LIB_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-m32>")

    else()
      target_compile_options(${LIB_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-m64>")
      target_compile_options(${LIB_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-m64>")
    endif()
      
  endif()
endif()
