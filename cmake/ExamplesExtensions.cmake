#######################################################################################################
# Create Application Helper
#######################################################################################################

include(CMakeParseArguments)



function(CreateExampleTarget)
  set(options)
  set(oneValueArgs EXAMPLE_NAME VS_SOLUTION_NAME)
  set(multiValueArgs EXAMPLE_SOURCES ADDITIONAL_LIBRARIES)
  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if(NOT PARSED_EXAMPLE_NAME)
    message(FATAL_ERROR "CreateExampleTarget: PARSED_EXAMPLE_NAME must contain the name of the application")
  endif()

  if(NOT PARSED_VS_SOLUTION_NAME)
    message(FATAL_ERROR "CreateExampleTarget: PARSED_VS_SOLUTION_NAME must contain the VS solution directory")
  endif()


  if(NOT PARSED_EXAMPLE_SOURCES)
    message(FATAL_ERROR "CreateExampleTarget: PARSED_EXAMPLE_SOURCES must contain the sources of the application")
  endif()
  


  add_executable(${PARSED_EXAMPLE_NAME} ${PARSED_EXAMPLE_SOURCES})
  if(NOT PARSED_ADDITIONAL_LIBRARIES)
    target_link_libraries(${PARSED_EXAMPLE_NAME} ssbl::ssbl)
  else()
    target_link_libraries(${PARSED_EXAMPLE_NAME} ssbl::ssbl ${PARSED_ADDITIONAL_LIBRARIES})
  endif()
  set_target_properties (${PARSED_EXAMPLE_NAME} PROPERTIES FOLDER ${PARSED_VS_SOLUTION_NAME})

  

  if (WIN32)
    if(MSVC)

    else()
    endif()
  else()
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      if("${SSBL_32BIT}" )
        target_compile_options(${PARSED_EXAMPLE_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-m32>")
        target_compile_options(${PARSED_EXAMPLE_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-m32>")
      else()
        target_compile_options(${PARSED_EXAMPLE_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-m64>")
        target_compile_options(${PARSED_EXAMPLE_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-m64>")
      endif()
    endif()
  endif()
 


endfunction()






