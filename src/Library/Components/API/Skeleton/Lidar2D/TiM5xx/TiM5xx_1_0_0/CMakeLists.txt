cmake_minimum_required(VERSION 3.10)
#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}")

project(${LOCAL_PROJECT_NAME}
VERSION "${SSBL_MAJOR}.${SSBL_MINOR}.${SSBL_REVISION}"
LANGUAGES CXX)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)
include(UseSWIG)


find_package(SWIG 3.0)
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)

ComponentSources(
NAME ${COMPONENT_SUFFIX}-skeleton
SOURCES
TiM5xx.cpp
TiM5xx_CoLa_Extension.cpp
TiM5xx_Factory.cpp
TiM5xx_Functions.cpp
TiM5xx_Variables.cpp
)

CreateLibraryTarget(
BASE_NAME
${BASE_NAME}
COMPONENT_NAME
${COMPONENT_SUFFIX}
COMPONENTS
${COMPONENT_SUFFIX}-skeleton
VS_SOLUTION_NAME
Skeleton/Lidar2D/TiM5xx
DEPENDS
base)



if(SWIG_FOUND)
  message(STATUS "Found SWIG ${SWIG_VERSION}")
  set(SWIG_INPUT          ${CMAKE_CURRENT_SOURCE_DIR}/interface/python/TiM5xx.i.in)
  set(SWIG_INTERFACE_SPEC ${CMAKE_CURRENT_BINARY_DIR}/${COMPONENT_SUFFIX}-skeleton-ipython/TiM5xx.i)
  configure_file(${SWIG_INPUT} ${SWIG_INTERFACE_SPEC} @ONLY)
  set (UseSWIG_TARGET_NAME_PREFERENCE STANDARD)

  set_property(SOURCE ${SWIG_INTERFACE_SPEC} PROPERTY CPLUSPLUS ON)
  set_property(SOURCE ${SWIG_INTERFACE_SPEC} PROPERTY USE_LIBRARY_INCLUDE_DIRECTORIES TRUE)
  
 # set(t ${COMPONENT_SUFFIX}-ipython)
  set(t "xl")
  swig_add_library(${t}
                 LANGUAGE
                   python
                 SOURCES
                   ${SWIG_INTERFACE_SPEC})

  
  target_include_directories(${t}  PRIVATE  ${Python3_INCLUDE_DIRS})
  
  get_target_property(OUT ssbl::tim5xx_1_0_0::static INTERFACE_INCLUDE_DIRECTORIES)
 
  message(STATUS "Found SWIG ${Python3_LIBRARIES}")
  message(STATUS "Found SWIG ${OUT}")
  
  unset(SWIG_LIB_DEPENDENS)
  
  list(APPEND SWIG_LIB_DEPENDENS ${Python3_LIBRARIES})
  list(APPEND SWIG_LIB_DEPENDENS "ssbl::tim5xx_1_0_0::static")
 
  target_link_libraries(${t}  PRIVATE ${SWIG_LIB_DEPENDENS})
  get_target_property(OUT ${t} SWIG_USE_LIBRARY_INCLUDE_DIRECTORIES)
    message(STATUS "Found SWIG ${OUT}")

  set_property(TARGET ${t}  PROPERTY SWIG_USE_LIBRARY_INCLUDE_DIRECTORIES TRUE)
  
else()
message(STATUS "SWIG not found")
endif()
