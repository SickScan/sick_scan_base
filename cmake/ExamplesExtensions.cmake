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
  
  if(NOT PARSED_ADDITIONAL_LIBRARIES)
    
  else()
    
  endif()
  #if(NOT PARSED_COMPONENTS)
  #  message(FATAL_ERROR "CreateLibraryTarget: COMPONENTS must contain the list of group names")
  #endif()


  add_executable(${PARSED_EXAMPLE_NAME} ${PARSED_EXAMPLE_SOURCES})
  target_link_libraries(${PARSED_EXAMPLE_NAME} ssbl::ssbl)
  set_target_properties (${PARSED_EXAMPLE_NAME} PROPERTIES FOLDER ${PARSED_VS_SOLUTION_NAME})

endfunction()






