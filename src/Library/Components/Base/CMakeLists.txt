cmake_minimum_required (VERSION 3.10)

#Project suffix is set to folder name
get_filename_component(COMPONENT_SUFFIX ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" COMPONENT_SUFFIX ${COMPONENT_SUFFIX})
string(TOLOWER  ${COMPONENT_SUFFIX} COMPONENT_SUFFIX)

set(BASE_NAME "ssbl")
set(LOCAL_PROJECT_NAME "${BASE_NAME}-${COMPONENT_SUFFIX}") 
 
project(  ${LOCAL_PROJECT_NAME} 
          VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}" 
          LANGUAGES CXX C)


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
  Common/SensorSkeleton.cpp
  Common/SensorInterface.cpp
  Common/SensorFunction.cpp
  CoLa/DefaultCoLaFunctions.cpp
  CoLa/CoLaSensorSkeleton.cpp
)

if(ZEPHYR_BASE)
ComponentSources(
  NAME Core_OS
  PATH Core/OS
  SOURCES 
  Zephyr/Task.cpp
  Zephyr/Mutex.cpp
  Zephyr/Time.cpp
  Zephyr/Timer.cpp
  Zephyr/Event.cpp
  Zephyr/VariableEventQueue.cpp
)

ComponentSources(
  NAME Core_Driver
  PATH Core/Driver
  SOURCES 
  Zephyr/Socket.cpp
)

else()
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
  PATH Core/Driver
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
endif()


CreateLibraryTarget(
  BASE_NAME 
    ${BASE_NAME}
  COMPONENT_NAME
    ${COMPONENT_SUFFIX}
  COMPONENTS
    Protocol
    Types
    Logger
    Core_OS
    Core_Sensor
    Core_Common
    Core_Driver
)
