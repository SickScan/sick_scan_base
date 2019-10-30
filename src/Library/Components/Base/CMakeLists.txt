cmake_minimum_required (VERSION 3.10)

#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER  ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)

set(LOCAL_PROJECT_NAME "ssbl-${COMPONENT_SUFFIX}") 
 
project(  ${LOCAL_PROJECT_NAME} 
          VERSION "${SSBL_MAJOR}.${SSBL_MINOR}.${SSBL_REVISION}" 
          LANGUAGES CXX)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")
include(LibraryTargetExtension)




ComponentSources(
  NAME Protocol
  PATH Protocol
  SOURCES 
  Common/Protocol.cpp
  Common/Checksum.cpp
  Common/TelegramBuffer.cpp
  CoLa/CoLaProtocol.cpp
  CoLa/CoLaBProtocol.cpp
  CoLa/CoLaBDeserializer.cpp
  CoLa/CoLaBSerializer.cpp
  CoLa/CoLaAProtocol.cpp
  CoLa/CoLaADeserializer.cpp
  CoLa/CoLaASerializer.cpp
)

ComponentSources(
  NAME Logger
  PATH Logger
  SOURCES 
  Logger.cpp
)

ComponentSources(
  NAME Types
  PATH Types
  SOURCES 
  emptyfile.cpp
)

ComponentSources(
  NAME Core_Common
  PATH Core/Common
  SOURCES 
  Assert.c
)

ComponentSources(
  NAME Core_Sensor
  PATH Core/Sensor
  SOURCES 
  Common/SickSensorSkeleton.cpp
  Common/SickSensorInterface.cpp
  Common/SickSensorFunction.cpp
  CoLa/DefaultCoLaFunctions.cpp
  CoLa/CoLaSensorSkeleton.cpp
)

if (WIN32)
ComponentSources(
  NAME Core_OS
  PATH Core/OS
  SOURCES 
  Windows/Task.cpp
  Windows/Mutex.cpp
  Windows/Time.cpp
  Windows/Timer.cpp
  Windows/Event.cpp
  Windows/VariableEventQueue.cpp
)

ComponentSources(
  NAME Core_Driver
  PATH Components/Core/Driver
  SOURCES 
  Windows/Socket.cpp
)

elseif (UNIX AND NOT APPLE)

ComponentSources(
  NAME Core_OS
  PATH Core/OS
  SOURCES 
    Linux/Task.cpp
    Linux/Mutex.cpp
    Linux/Time.cpp
    Linux/Timer.cpp
    Linux/Event.cpp
    Linux/VariableEventQueue.cpp
)

ComponentSources(
  NAME Core_Driver
  PATH Core/Driver
  SOURCES 
  Linux/Socket.cpp
)


else()
message(FATAL_ERROR "Not supported yet")
endif()



CreateLibraryTarget(
  LIBRARY_BASE_NAME 
    ${LOCAL_PROJECT_NAME}
  COMPONENTS
    Protocol
    Types
    Logger
    Core_OS
    Core_Sensor
    Core_Common
    Core_Driver
)