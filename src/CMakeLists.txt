set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")

include(ClangFormatExtension)

## Contatins the device generator
if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/Generator)
add_subdirectory(Generator)
endif()

add_subdirectory(Library)
#add_subdirectory(ThirdParty)
add_subdirectory(Examples)


list(APPEND CLANG_FORMAT_FOLDERS "${CMAKE_CURRENT_LIST_DIR}/Library")
list(APPEND CLANG_FORMAT_FOLDERS "${CMAKE_CURRENT_LIST_DIR}/Examples")

CreateClangFormatTarget(
  FOLDERS
    ${CLANG_FORMAT_FOLDERS}
)