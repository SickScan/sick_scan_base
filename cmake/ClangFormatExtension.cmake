

#######################################################################################################
# CreateClangFormatTarget()
#######################################################################################################
function(CreateClangFormatTarget)
  set(options)
  set(oneValueArgs)
  set(multiValueArgs FOLDERS)

  cmake_parse_arguments(PARSED "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})


  
  if(NOT PARSED_FOLDERS)
    message(FATAL_ERROR "CreateClangFormatTarget: PARSED_FOLDERS must not be empty")
  endif()

  find_package(ClangFormat)

  if(CLANG_FORMAT_FOUND)
    foreach(Folder ${PARSED_FOLDERS})
      get_filename_component(FolderPathAbsolute "${Folder}" REALPATH)   
      file(GLOB_RECURSE ClangFormatSourcesFolder ABSOLUTE "${Folder}" "${FolderPathAbsolute}/*.h" "${FolderPathAbsolute}/*.hpp" "${FolderPathAbsolute}/*.c" "${FolderPathAbsolute}/*.cpp")
      list(APPEND ClangFormatSources ${ClangFormatSourcesFolder})
    endforeach()
    
    add_custom_target(
      RunClangFormat
      COMMAND ${CLANG_FORMAT_EXECUTABLE} -style=file -i ${ClangFormatSources}  )
    
    set_target_properties (RunClangFormat PROPERTIES FOLDER CMakeGeneral)
    
  else()
    message(STATUS "CreateClangFormatTarget: clang-format not found")
    message(STATUS "CreateClangFormatTarget: Not creating target BeautifyCode")
  endif()
endfunction()