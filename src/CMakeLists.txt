## Contatins the device generator
if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/Generator)
add_subdirectory(Generator)
endif()

add_subdirectory(Library)
add_subdirectory(ThirdParty)
add_subdirectory(Examples)
