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
function(GetFullLibraryName BASE_NAME COMPONENT_NAME BUILD_MODE LIBRARY_FILE_NAME)
  
  if ("${BUILD_MODE}" STREQUAL "STATIC")
    set(BUILD_MODE_SUFFIX "static")
  elseif ("${BUILD_MODE}" STREQUAL "SHARED")
    set(BUILD_MODE_SUFFIX "shared")
  else()
    message(FATAL_ERROR "Invalid build mode")
  endif()
  

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
  set(LIBRARY_FILE_NAME "${BASE_NAME}-${COMPONENT_NAME}-${SSBL_TARGET_OS}-${TARGET_ARCHITECTURE_NAME}-${COMPILER_SUFFIX}-${COMPILER_VERSION}-${BUILD_MODE_SUFFIX}" PARENT_SCOPE)
endfunction()

#######################################################################################################
#######################################################################################################
function(GetLibraryCompileLinkFlags LIB_DBG_FLAGS, LIB_REL_FLAGS, LIB_DEPENDENS)
  
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
function(CreateLibraryTargetInternal)
  set(options)
  set(oneValueArgs    BASE_NAME COMPONENT_NAME BUILD_MODE)
  set(multiValueArgs  SOURCES)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_BASE_NAME)
    message(FATAL_ERROR "CreateLibraryTargetInternal: PARSED_BASE_NAME must contain the name of the library")
  endif()

  if(NOT PARSED_COMPONENT_NAME)
    message(FATAL_ERROR "CreateLibraryTargetInternal: PARSED_COMPONENT_NAME has to be set")
  endif()

  if(NOT PARSED_SOURCES)
    message(FATAL_ERROR "CreateLibraryTargetInternal: PARSED_SOURCES must be a list of source files")
  endif()
  
  
  if(NOT PARSED_BUILD_MODE)
    message(FATAL_ERROR "CreateLibraryTargetInternal: PARSED_BUILD_MODE must be either STATIC or SHARED")
  endif()

  if ("${PARSED_BUILD_MODE}" STREQUAL "STATIC")
    set(TARGET_NAME "${PARSED_BASE_NAME}-${PARSED_COMPONENT_NAME}-static")
    set(ALIAS_TARGET_NAME "${PARSED_BASE_NAME}::${PARSED_COMPONENT_NAME}::static")
  else()
    set(TARGET_NAME "${PARSED_BASE_NAME}-${PARSED_COMPONENT_NAME}-shared")
    set(ALIAS_TARGET_NAME "${PARSED_BASE_NAME}::${PARSED_COMPONENT_NAME}::shared")
  endif()
  
  GetFullLibraryName(${PARSED_BASE_NAME} ${PARSED_COMPONENT_NAME} ${PARSED_BUILD_MODE} LIBRARY_FILE_NAME)
  
  
  add_library(${TARGET_NAME} ${PARSED_BUILD_MODE} ${PARSED_SOURCES})
  add_library(${ALIAS_TARGET_NAME} ALIAS ${TARGET_NAME} )


  set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME ${LIBRARY_FILE_NAME})
  set_target_properties(${TARGET_NAME} PROPERTIES FOLDER Library)
  set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "-dbg")
  set_target_properties(${TARGET_NAME} PROPERTIES RELEASE_POSTFIX "-rel")
  set_target_properties(${TARGET_NAME} PROPERTIES PREFIX "")

  target_include_directories(${TARGET_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:${SSBL_INSTALL_DIR}/include>
        "$<BUILD_INTERFACE:${incdirs}>"
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
  
  if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    target_compile_options(${TARGET_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:-std=c++11>" ) 
  endif()

  target_compile_options(${TARGET_NAME} PRIVATE "$<$<CONFIG:DEBUG>:${LIB_DBG_FLAGS}>")
  target_compile_options(${TARGET_NAME} PRIVATE "$<$<CONFIG:RELEASE>:${LIB_REL_FLAGS}>")
  target_link_libraries(${TARGET_NAME}  PRIVATE ${LIB_DEPENDENS} )

    # CMake 3.10 does not support this yet
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      if("${SSBL_32BIT}" )
        target_link_libraries(${TARGET_NAME} INTERFACE "-m32")   
      endif()
    
    endif()

  ## Installing

  # Add an install target
  install(TARGETS ${TARGET_NAME}
      EXPORT ${PARSED_BASE_NAME}-export
      RUNTIME DESTINATION ${SSBL_INSTALL_DIR}/bin
      LIBRARY DESTINATION ${SSBL_INSTALL_DIR}/lib
      ARCHIVE DESTINATION ${SSBL_INSTALL_DIR}/lib
      PUBLIC_HEADER DESTINATION ${SSBL_INSTALL_DIR}/include
      PRIVATE_HEADER DESTINATION ${SSBL_INSTALL_DIR}/include
  )
  #set_target_properties (${PARSED_SSBL_BASE_NAME}-export PROPERTIES FOLDER Library)
  # Export install target
  install(EXPORT ${PARSED_BASE_NAME}-export
    FILE
      ${PARSED_BASE_NAME}${PARSED_COMPONENT_NAME}Targets.cmake
    NAMESPACE
      ${PARSED_SSBL_BASE_NAME}::
    DESTINATION
      ${SSBL_INSTALL_CONFIG_DIR}
  )


  if ("${PARSED_BASE_NAME}" STREQUAL "base")
    #fill config and copy to out
    configure_package_config_file(${TOP_DIR}/cmake/ssblConfig.cmake.in #in
        ${CMAKE_CURRENT_BINARY_DIR}/ssblConfig.cmake #tmp
        INSTALL_DESTINATION ${SSBL_INSTALL_CONFIG_DIR} #out
    )
    
    install(FILES
        ${CMAKE_CURRENT_BINARY_DIR}/ssblConfig.cmake
        DESTINATION ${SSBL_INSTALL_CONFIG_DIR}
    )
  endif()
  
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
    
endfunction()





#######################################################################################################
#######################################################################################################
function(CreateLibraryTarget)
  set(options)
  set(oneValueArgs    BASE_NAME COMPONENT_NAME)
  set(multiValueArgs  COMPONENTS)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_BASE_NAME)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_BASE_NAME must contain the base name of the library")
  endif()

  if(NOT PARSED_COMPONENT_NAME)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_COMPONENT_NAME must name a subcomponent of the library")
  endif()
  
  if(NOT PARSED_COMPONENTS)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_COMPONENTS must not be empty")
  endif()

  if(PARSED_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "Unknown arguments given to CreateLibraryTarget(): \"${PARSED_UNPARSED_ARGUMENTS}\"")
  endif()
  
  #==========================================
  # GENERAL SETUP
  # Needed for Visual Studio
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  
  # Install location
  set(SSBL_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}")
  get_filename_component(SSBL_INSTALL_DIR ${SSBL_INSTALL_DIR} ABSOLUTE)
  set(SSBL_INSTALL_DIR "${SSBL_INSTALL_DIR}/${BASE_NAME}-${PROJECT_VERSION}")
  set(SSBL_INSTALL_CONFIG_DIR ${SSBL_INSTALL_DIR}/cmake)
  

  # Include Directories
  list(APPEND incdirs "${CMAKE_CURRENT_SOURCE_DIR}/../../Components" "${CMAKE_CURRENT_SOURCE_DIR}/../../include")
  

  #==========================================
  # CORE Library
  foreach(ComponentName ${PARSED_COMPONENTS})
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

  
  GetLibraryCompileLinkFlags(LIB_DBG_FLAGS, LIB_REL_FLAGS, LIB_DEPENDENS)


  CreateLibraryTargetInternal(
    BASE_NAME
      ${PARSED_BASE_NAME}
    COMPONENT_NAME
      ${PARSED_COMPONENT_NAME}
    BUILD_MODE
      STATIC
    SOURCES
      ${SourceListInternal}
  )


  

  
  #set(CMAKE_EXPORT_PACKAGE_REGISTRY ON)
  #export(PACKAGE ssbl)



    


endfunction()






