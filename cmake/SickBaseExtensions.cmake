#######################################################################################################
# Boilerplate for CMake
#######################################################################################################

include(CMakeParseArguments)

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
# CreateLibraryTarget(
#   LIBRARY_BASE_NAME
#   COMPONENTS [componentName1, componentName2, ...]
#   [SOURCES [sourcesName1, sourcesName2, ...]]
#   [FILE_SOURCES [fileSourcePath1, fileSourcePath2, ...]]
# )
#
# Adds a library using add_library for the bundle library sources
#  and a library using add_library for the unittest sources (contains only files from ComponentSources(UNITTESTS) macro.
#
# Output file for windows:
# - ${PARSED_NAME}.${CMAKE_TARGET_NAME}.${CMAKE_BUILD_TYPE}.lib
# - lib${PARSED_NAME}.a (currently, might change in future to also contain target name and build type)
#
# Should be used after ComponentSources() and Sources() macro to automatically add them to the library
#   by specifying their name in the COMPONENTS or SOURCES list argument.
# Additionally more sources files can be added using FILE_SOURCES argument.
#
# Source groups are automatically created for visual studio.
#
#
# There are following variables set to parent scope to be used in the CMakeLists.txt:
# - LIBRARY_FILE_NAME: The generated name of the library to be used in target_link_libraries()
# - LIBRARY_SOURCE_LIST + LIBRARY_SOURCE_UNITTEST_LIST: The lists for the source to e.g. force c++ compilation afterwards
#######################################################################################################
function(CreateLibraryTarget)
  set(options)
  set(oneValueArgs LIBRARY_BASE_NAME )
  set(multiValueArgs COMPONENTS)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_LIBRARY_BASE_NAME)
    message(FATAL_ERROR "CreateLibraryTarget: PARSED_LIBRARY_BASE_NAME must contain the name of the library")
  endif()

  if(NOT PARSED_COMPONENTS)
    message(FATAL_ERROR "CreateLibraryTarget: COMPONENTS must contain the list of group names")
  endif()

  if(PARSED_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "Unknown arguments given to CreateLibraryTarget(): \"${PARSED_UNPARSED_ARGUMENTS}\"")
  endif()

  foreach(ComponentName ${PARSED_COMPONENTS})
    set(COMPONENT_SOURCES_VARIABLE COMPONENT_SOURCES_${ComponentName})
    set(COMPONENT_HEADERS_VARIABLE COMPONENT_HEADERS_${ComponentName})
    list(APPEND SourceListInternal "${${COMPONENT_SOURCES_VARIABLE}}" "${${COMPONENT_HEADERS_VARIABLE}}")
  endforeach()
  
  foreach(SetName ${PARSED_SOURCES})
    set(SOURCES_VARIABLE SOURCES_${SetName})
    set(HEADERS_VARIABLE HEADERS_${SetName})
    set(EXTERNAL_SOURCES_VARIABLE EXTERNAL_SOURCES_${SetName})
    set(EXTERNAL_HEADERS_VARIABLE EXTERNAL_HEADERS_${SetName})
    list(APPEND SourceListInternal "${${SOURCES_VARIABLE}}" "${${HEADERS_VARIABLE}}" "${${EXTERNAL_SOURCES_VARIABLE}}" "${${EXTERNAL_HEADERS_VARIABLE}}")
  endforeach()
  
  # Create source groups for Visual Studio
  if(MSVC)
    if(SourceListInternal)
      CreateSourceGroupsVS(SOURCES ${SourceListInternal})
    endif()
  endif()

  # Append other source files
  foreach(SourcePath ${PARSED_FILE_SOURCES})
    list(APPEND SourceListInternal ${SourcePath})
  endforeach()

  # Add headers from the include-folder to source groups
  
  get_filename_component(ComponentPathAbsolute "${PROJECT_SOURCE_DIR}/../include" REALPATH)
  file(GLOB_RECURSE ComponentHeadersAbs RELATIVE "${PROJECT_SOURCE_DIR}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")
  file(GLOB_RECURSE ComponentHeadersList RELATIVE "${ComponentPathAbsolute}" "${ComponentPathAbsolute}/*.h" "${ComponentPathAbsolute}/*.hpp")
  if(MSVC)  
    if(ComponentHeadersList)
      CreateSourceGroupsVS(SOURCES ${ComponentHeadersList} CATEGORY "include")
    endif()
    list(APPEND SourceListInternal ${ComponentHeadersAbs})
  endif()

  if (WIN32)
  
    #only native builds at the moment
    set(SSBL_TARGET_OS "windows")  
    if(MSVC)
      if(NOT "${CMAKE_GENERATOR}" MATCHES "(Win64|IA64)")
        set(TARGET_ARCHITECTURE "i386")
      else()
        set(TARGET_ARCHITECTURE "x86_64")
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
      set(TARGET_ARCHITECTURE "x86_64")
      set(COMPILER_SUFFIX "mingw")
      set(COMPILER_VERSION ${CMAKE_CXX_COMPILER_VERSION})
    endif()
  else()
    #only native builds at the moment
    set(SSBL_TARGET_OS "linux")  
  
    if("${SSBL_32BIT}" )
      set(TARGET_ARCHITECTURE "i386")
    else()
      set(TARGET_ARCHITECTURE "x86_64")
    endif()  
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
       set(COMPILER_SUFFIX "gcc")
      set(COMPILER_VERSION ${CMAKE_CXX_COMPILER_VERSION})  
    endif()
  endif()
  
  set(LIBRARY_FILE_NAME "${PARSED_LIBRARY_BASE_NAME}-${SSBL_TARGET_OS}-${TARGET_ARCHITECTURE}-${COMPILER_SUFFIX}-${COMPILER_VERSION}")

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
        set(GENERAL_FLAGS "${GENERAL_FLAGS} -m32")
      endif()
      
      set(DEBUG_FLAGS "-g3;-O0;${GENERAL_FLAGS}")
      set(RELEASE_FLAGS "-g;-O2;${GENERAL_FLAGS}")
      set(ADDITIONAL_LIBS "-lpthread -lrt")
  endif()


  # Create libraries
  add_library(${LIBRARY_FILE_NAME} STATIC ${SourceListInternal})
  add_library(ssbl::ssbl ALIAS ${LIBRARY_FILE_NAME} )
  
  set_target_properties(${LIBRARY_FILE_NAME} PROPERTIES DEBUG_POSTFIX "-dbg")
  set_target_properties(${LIBRARY_FILE_NAME} PROPERTIES RELEASE_POSTFIX "-rel")
  set_target_properties(${LIBRARY_FILE_NAME} PROPERTIES PREFIX "")

  set(LIBRARY_FILE_NAME "${LIBRARY_FILE_NAME}" PARENT_SCOPE)
  set(LIBRARY_SOURCE_LIST "${SourceListInternal}" PARENT_SCOPE)

  target_include_directories(${LIBRARY_FILE_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Components>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
  
  if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    target_compile_options(${LIBRARY_FILE_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:-std=c++11>" ) 
  endif()

  target_compile_options(${LIBRARY_FILE_NAME} PRIVATE "$<$<CONFIG:DEBUG>:${DEBUG_FLAGS}>")
  target_compile_options(${LIBRARY_FILE_NAME} PRIVATE "$<$<CONFIG:RELEASE>:${RELEASE_FLAGS}>")

  target_link_libraries(${LIBRARY_FILE_NAME}  INTERFACE ${ADDITIONAL_LIBS} )

endfunction()

#######################################################################################################
# GenerateDocumentation()
#######################################################################################################
function(GenerateDocumentation)


  find_package(Doxygen)
  if (DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    add_custom_target( RunDoxygen
      COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
      VERBATIM )
  else ()
    message(STATUS "GenerateDocumentation: Doxygen was not found")
    message(STATUS "GenerateDocumentation: Not creating target GenerateDoxygenDocumentation")
  endif ()


  find_package(Sphinx)
  if (SPHINX_FOUND)
    set(SPHINX_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/sphinx)
    set(SPHINX_BUILD ${CMAKE_CURRENT_BINARY_DIR}/sphinx)

    add_custom_target(RunSphinx ALL
                      COMMAND
                      ${SPHINX_EXECUTABLE} -b html
                      -Dbreathe_projects.SSBL=${SPHINX_BUILD}/../doxygen/xml
                      ${SPHINX_SOURCE} ${SPHINX_BUILD}
                      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                      DEPENDS  RunDoxygen)
  else ()
    message(STATUS "GenerateDocumentation: Sphinx was not found")
    message(STATUS "GenerateDocumentation: Not creating target Sphinx")
  endif ()
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




