#######################################################################################################
# Boilerplate for CMake
#######################################################################################################

include(CMakeParseArguments)
include(CMakePackageConfigHelpers)

#######################################################################################################
# ComponentSources(
#   NAME componentName
#   PATH componentPath
#   SOURCES [sourcePath1, sourcePath2, ...]
# )
#
# Gathers component sources for the library
#######################################################################################################
function(ComponentSources)
  set(options)
  set(oneValueArgs NAME PATH)
  set(multiValueArgs SOURCES)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
  
  if(NOT PARSED_NAME)
    message(FATAL_ERROR "ComponentSources: NAME must be set to the name of the component (should be unique in the given CMakeLists.txt)")
  endif()
  
  if(NOT PARSED_PATH)
    message(FATAL_ERROR "ComponentSources: PATH must be set to the path of the component sources (relative to CMakeLists.txt)")
  endif()
  
  if(NOT PARSED_SOURCES)
    message(FATAL_ERROR "ComponentSources: SOURCES must contain the list of source file paths relative to PATH")
  endif()
  
  if(PARSED_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "Unknown arguments given to ComponentSources(): \"${PARSED_UNPARSED_ARGUMENTS}\"")
  endif()

  # Build list of source files
  foreach(SourceFilePath ${PARSED_SOURCES})
    list(APPEND Sources ${PARSED_PATH}/private/${SourceFilePath})
  endforeach()

  # Set variable with source files in parent scope
  set(COMPONENT_SOURCES_${PARSED_NAME} ${Sources} PARENT_SCOPE)
  
  # Gather header files recursively
  get_filename_component(BasePathAbsolute ${PARSED_PATH} REALPATH)
  file(GLOB_RECURSE HeadersTmp RELATIVE ${BasePathAbsolute} ${PARSED_PATH}/*.h ${PARSED_PATH}/*.hpp)
  foreach(HeaderFilePath ${HeadersTmp})
    list(APPEND Headers ${PARSED_PATH}/${HeaderFilePath})
  endforeach()
  
  # Set variable with header files in parent scope
  set(COMPONENT_HEADERS_${PARSED_NAME} ${Headers} PARENT_SCOPE)
endfunction()

#######################################################################################################
# CreateSourceGroupsVS(
#   CATEGORY componentPath
#   SOURCES [sourcePath1, sourcePath2, ...]
# )
#
# Helper to create a source group within Visual Studio IDE
#######################################################################################################
function(CreateSourceGroupsVS)
  set(options)
  set(oneValueArgs CATEGORY)
  set(multiValueArgs SOURCES)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
  
  if(NOT PARSED_SOURCES)
    message(FATAL_ERROR "CreateSourceGroupsVS: SOURCES must be set to the list of sources to create groups from")
  endif()
  
  if(NOT PARSED_CATEGORY)
    set(CATEGORY "src")
  else()
    set(CATEGORY ${PARSED_CATEGORY})
  endif()

  foreach(SourceItem ${PARSED_SOURCES})
    get_filename_component(SourceGroupName ${SourceItem} DIRECTORY)
    if(PARSED_GROUP_PREFIX)
      set(SourceGroupName ${CATEGORY}/${PARSED_GROUP_PREFIX}/${SourceGroupName})
    else()
      set(SourceGroupName ${CATEGORY}/${SourceGroupName})
    endif()
    if(MSVC)
      string(REPLACE "/" "\\" SourceGroupName ${SourceGroupName})
    endif()
    if(PARSED_PATH)
      set(SourceItemAbsolute ${PARSED_PATH}/${SourceItem})
    else()
      set(SourceItemAbsolute ${SourceItem})
    endif()
    source_group(${SourceGroupName} FILES ${SourceItemAbsolute})
  endforeach()
endfunction()


#######################################################################################################
#######################################################################################################
function(GetFullLibraryName BASE_NAME LIBRARY_FILE_NAME)
  if (WIN32)
    #only native builds at the moment
    set(SSBL_TARGET_OS "windows")  
    if(MSVC)
      if(NOT "${CMAKE_GENERATOR}" MATCHES "(Win64|IA64)")
        set(TARGET_ARCHITECTURE_NAME "i386")
      else()
        set(TARGET_ARCHITECTURE_NAME "x86_64")
      endif()
    
      if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
        set(COMPILER_SUFFIX "msvc")
        set(COMPILER_VERSION ${MSVC_TOOLSET_VERSION})
      elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        set(COMPILER_SUFFIX "clang")
        set(COMPILER_VERSION ${CMAKE_CXX_COMPILER_VERSION})
      else()
        message(FATAL_ERROR "Visual Studio builds with ${CMAKE_CXX_COMPILER_ID} are not supported")
      endif()  
    else()    
      set(TARGET_ARCHITECTURE_NAME "x86_64")
      set(COMPILER_SUFFIX "mingw")
      set(COMPILER_VERSION ${CMAKE_CXX_COMPILER_VERSION})
    endif()
  else()
    #only native builds at the moment
    set(SSBL_TARGET_OS "linux")  
  
    if("${SSBL_32BIT}" )
      set(TARGET_ARCHITECTURE_NAME "i386")
    else()
      set(TARGET_ARCHITECTURE_NAME "x86_64")
    endif()  
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
       set(COMPILER_SUFFIX "gcc")
      set(COMPILER_VERSION ${CMAKE_CXX_COMPILER_VERSION})  
    endif()
  endif()
  set(LIBRARY_FILE_NAME "${BASE_NAME}-${SSBL_TARGET_OS}-${TARGET_ARCHITECTURE_NAME}-${COMPILER_SUFFIX}-${COMPILER_VERSION}" PARENT_SCOPE)
endfunction()

#######################################################################################################
#######################################################################################################
function(GetLibraryFlags LIB_DBG_FLAGS, LIB_REL_FLAGS, LIB_DEPENDENS)
  
  if (WIN32)
    if(MSVC)
      set(GENERAL_FLAGS "/Z7;-D_CRT_SECURE_NO_WARNINGS")
      set(DEBUG_FLAGS "/Od;/W4;${GENERAL_FLAGS}")
      set(RELEASE_FLAGS "/O2;/W4;${GENERAL_FLAGS}")
      set(ADDITIONAL_LIBS "wsock32;ws2_32")
    else()
      set(GENERAL_FLAGS "-Wall")
      set(DEBUG_FLAGS "-g3 -O0 ${GENERAL_FLAGS}")
      set(RELEASE_FLAGS "-g -O2 ${GENERAL_FLAGS}")
      set(ADDITIONAL_LIBS "wsock32;ws2_32")
    endif()
  else()
      set(GENERAL_FLAGS "-Wall;-Wextra")
      if("${SSBL_32BIT}" )
        set(GENERAL_FLAGS "${GENERAL_FLAGS};-m32")
      endif()
      
      set(DEBUG_FLAGS "-g3;-O0;${GENERAL_FLAGS}")
      set(RELEASE_FLAGS "-g;-O2;${GENERAL_FLAGS}")
      set(ADDITIONAL_LIBS "-lpthread -lrt")
  endif()
  
  set(LIB_DBG_FLAGS  ${DEBUG_FLAGS} PARENT_SCOPE)
  set(LIB_REL_FLAGS ${RELEASE_FLAGS} PARENT_SCOPE)
  set(LIB_DEPENDENS ${ADDITIONAL_LIBS} PARENT_SCOPE)
  
endfunction()

#######################################################################################################
#######################################################################################################
function(CreateLibraryTarget)
  set(options)
  set(oneValueArgs    SSBL_BASE_NAME)
  set(multiValueArgs  CORE_COMPONENTS SENSOR_SKELETONS)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_SSBL_BASE_NAME)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_SSBL_BASE_NAME must contain the name of the library")
  endif()


  
  if(NOT PARSED_CORE_COMPONENTS)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_CORE_COMPONENTS must not be empty")
  endif()

 # if(NOT PARSED_SENSOR_SKELETONS)
 #   message(FATAL_ERROR "CreateLibraryTarget: PARSED_SENSOR_SKELETONS must not be empty")
 # endif()

  if(PARSED_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "Unknown arguments given to CreateLibraryTarget(): \"${PARSED_UNPARSED_ARGUMENTS}\"")
  endif()

  set_property(GLOBAL PROPERTY USE_FOLDERS ON)

  foreach(ComponentName ${PARSED_CORE_COMPONENTS})
    set(COMPONENT_SOURCES_VARIABLE COMPONENT_SOURCES_${ComponentName})
    set(COMPONENT_HEADERS_VARIABLE COMPONENT_HEADERS_${ComponentName})
    list(APPEND SourceListInternal "${${COMPONENT_SOURCES_VARIABLE}}" "${${COMPONENT_HEADERS_VARIABLE}}")
  endforeach()
  
  # Create source groups for Visual Studio
  if(MSVC)
    if(SourceListInternal)
      CreateSourceGroupsVS(SOURCES ${SourceListInternal})
    endif()
  endif()

  # Add headers from the include-folder to source groups
  get_filename_component(ComponentPathAbsolute "${PROJECT_SOURCE_DIR}/include" REALPATH)
  file(GLOB_RECURSE ComponentHeadersAbs RELATIVE "${PROJECT_SOURCE_DIR}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")
  file(GLOB_RECURSE ComponentHeadersList RELATIVE "${ComponentPathAbsolute}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")
  if(MSVC)  
    if(ComponentHeadersList)
      CreateSourceGroupsVS(SOURCES ${ComponentHeadersList} CATEGORY "include")
    endif()
    list(APPEND SourceListInternal ${ComponentHeadersAbs})
  endif()


  GetFullLibraryName(PARSED_SSBL_BASE_NAME LIBRARY_FILE_NAME)
  GetLibraryFlag(LIB_DBG_FLAGS, LIB_REL_FLAGS, LIB_DEPENDENS)

  # Install location
  set(SSBL_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}")
  get_filename_component(SSBL_INSTALL_DIR ${SSBL_INSTALL_DIR} ABSOLUTE)
  set(SSBL_INSTALL_DIR "${SSBL_INSTALL_DIR}/${PROJECT_NAME}-${PROJECT_VERSION}")
  
  # Version Info 
  configure_file(${PROJECT_SOURCE_DIR}/../../cmake/VersionInfo.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/VersionInfo.h)
  
  set(LIB_MODE  "STATIC" "DYNAMIC")
  set(LIB_NAMES "${LIBRARY_FILE_NAME}-s" "${LIBRARY_FILE_NAME}-d" )
  set(LIB_TARGET_NAMES "${PARSED_SSBL_BASE_NAME}-static" "${PARSED_SSBL_BASE_NAME}-dynamic")

  list(LENGTH LIB_MODE len1)
  math(EXPR len2 "${len1} - 1")

  foreach(val RANGE ${len2})
    list(GET LIB_MODE ${val} bMode)
    list(GET LIB_TARGET_NAMES ${val} targetName)
    list(GET LIB_NAMES ${val} libName)
    
    add_library(${targetName} ${bMode} ${SourceListInternal})
    set_target_properties(${targetName} PROPERTIES OUTPUT_NAME ${libName})
    set_target_properties (${targetName} PROPERTIES FOLDER Library)
    
    #ALIAS?
    #add_library(ssbl::ssbl ALIAS ${PARSED_SSBL_BASE_NAME} )   

    set_target_properties(${targetName} PROPERTIES DEBUG_POSTFIX "-dbg")
    set_target_properties(${targetName} PROPERTIES RELEASE_POSTFIX "-rel")
    set_target_properties(${targetName} PROPERTIES PREFIX "")
  
  
  endforeach()
  
  

  
  list(APPEND incdirs "${CMAKE_CURRENT_SOURCE_DIR}/Components" "${CMAKE_CURRENT_SOURCE_DIR}/include")
  
  target_include_directories(${PARSED_SSBL_BASE_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:${SSBL_INSTALL_DIR}/include>
        "$<BUILD_INTERFACE:${incdirs}>"
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
  
  if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    target_compile_options(${PARSED_SSBL_BASE_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:-std=c++11>" ) 
  endif()

  target_compile_options(${PARSED_SSBL_BASE_NAME} PRIVATE "$<$<CONFIG:DEBUG>:${LIB_DBG_FLAGS}>")
  target_compile_options(${PARSED_SSBL_BASE_NAME} PRIVATE "$<$<CONFIG:RELEASE>:${LIB_REL_FLAGS}>")
  target_link_libraries(${PARSED_SSBL_BASE_NAME}  INTERFACE ${LIB_DEPENDENS} )

  # CMake 3.10 does not support this yet
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    if("${SSBL_32BIT}" )
      target_link_libraries(${PARSED_SSBL_BASE_NAME} INTERFACE "-m32")   
    endif()
  
  endif()
	
  set(SSBL_INSTALL_CONFIG_DIR ${SSBL_INSTALL_DIR}/cmake)

  # Add an install target
  install(TARGETS ${PARSED_SSBL_BASE_NAME}
      EXPORT ${PARSED_SSBL_BASE_NAME}-export
      RUNTIME DESTINATION ${SSBL_INSTALL_DIR}/bin
      LIBRARY DESTINATION ${SSBL_INSTALL_DIR}/lib
      ARCHIVE DESTINATION ${SSBL_INSTALL_DIR}/lib
      PUBLIC_HEADER DESTINATION ${SSBL_INSTALL_DIR}/include
      PRIVATE_HEADER DESTINATION ${SSBL_INSTALL_DIR}/include
  )
  #set_target_properties (${PARSED_SSBL_BASE_NAME}-export PROPERTIES FOLDER Library)
  # Export install target
  install(EXPORT ${PARSED_SSBL_BASE_NAME}-export
    FILE
      ${PARSED_SSBL_BASE_NAME}Targets.cmake
    NAMESPACE
      ${PARSED_SSBL_BASE_NAME}::
    DESTINATION
      ${SSBL_INSTALL_CONFIG_DIR}
  )
  
  #fill config and copy to out
  configure_package_config_file(${PROJECT_SOURCE_DIR}/../../cmake/${PARSED_SSBL_BASE_NAME}Config.cmake.in #in
      ${CMAKE_CURRENT_BINARY_DIR}/${PARSED_SSBL_BASE_NAME}Config.cmake #tmp
      INSTALL_DESTINATION ${SSBL_INSTALL_CONFIG_DIR} #out
  )
  
  install(FILES
      ${CMAKE_CURRENT_BINARY_DIR}/${PARSED_SSBL_BASE_NAME}Config.cmake
      DESTINATION ${SSBL_INSTALL_CONFIG_DIR}
  )
  
  get_filename_component(ComponentPathAbsolute "${PROJECT_SOURCE_DIR}/include" REALPATH)

  file(GLOB_RECURSE InstallHeaders RELATIVE "${ComponentPathAbsolute}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")

  foreach(Header ${InstallHeaders})
    STRING(REGEX MATCH "(.\\\*)\\\[/\\\]" LDIR ${Header})
    install(FILES include/${Header} DESTINATION ${SSBL_INSTALL_DIR}/include/${LDIR})
  endforeach()
  
  get_filename_component(ComponentPathAbsolute "${PROJECT_SOURCE_DIR}" REALPATH)

  file(GLOB_RECURSE InstallHeaders RELATIVE "${ComponentPathAbsolute}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")

  foreach(Header ${InstallHeaders})
    get_filename_component(LDIR ${Header} DIRECTORY )
    string(FIND "${LDIR}" "include" out)
    if ("${out}" EQUAL 0)
    else()
      string(REPLACE "Components/" "" LDIROUT ${LDIR} )
      install(FILES ${Header} DESTINATION ${SSBL_INSTALL_DIR}/include/${LDIROUT})
    endif()
  endforeach()
  
  set(CMAKE_EXPORT_PACKAGE_REGISTRY ON)
  export(PACKAGE ssbl)

endfunction()

#######################################################################################################
# CreateClangFormatTarget()
#######################################################################################################
function(CreateClangFormatTarget)
  set(options)
  set(oneValueArgs)
  set(multiValueArgs SOURCES)

  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_SOURCES)
    message(FATAL_ERROR "CreateClangFormatTarget: PARSED_SOURCES must not be empty")
  endif()

  find_package(ClangFormat)

  if(CLANG_FORMAT_FOUND)
  add_custom_target(
    BeautifyCode
    COMMAND ${CLANG_FORMAT_EXECUTABLE} -style=file -i ${PARSED_SOURCES}  )
  else()
    message(STATUS "CreateClangFormatTarget: clang-format not found")
    message(STATUS "CreateClangFormatTarget: Not creating target BeautifyCode")
  endif()
endfunction()




