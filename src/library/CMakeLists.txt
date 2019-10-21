cmake_minimum_required (VERSION 3.10)
project(ssbl)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${TOP_DIR}/cmake")

include(LibraryExtensions)

include_directories(${PROJECT_SOURCE_DIR}/Components)




ComponentSources(
  NAME AutoIp
  PATH Components/AutoIp
  SOURCES 
  AutoIpHandler.cpp
)

ComponentSources(
  NAME Protocol
  PATH Components/Protocol
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
  PATH Components/Logger
  SOURCES 
  Logger.cpp
)


ComponentSources(
  NAME Types
  PATH Components/Types
  SOURCES 
  emptyfile.cpp
)

ComponentSources(
  NAME SkeletonApi
  PATH Components/API/Skeleton
  SOURCES 
  TiM5xxSkeleton/TiM5xxSkeleton.cpp
  TiM5xxSkeleton/TiM5xxSkeleton_Variables.cpp
  TiM5xxSkeleton/TiM5xxSkeleton_Functions.cpp
  TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.cpp
  SickSkeletonFactory.cpp
)
 
ComponentSources(
  NAME FamilyApiLidar2D
  PATH Components/API/Families/SickLidar2D
  SOURCES 
  SickLidar2D.cpp
  SickLidar2D_Factory.cpp
  TiM5xxSeries.cpp
)

ComponentSources(
  NAME Core_Common
  PATH Components/Core/Common
  SOURCES 
  Assert.c
)

ComponentSources(
  NAME SoftwarePLL
  PATH Components/SoftwarePLL
  SOURCES 
  SoftwarePLL.cpp
)



ComponentSources(
  NAME Core_Sensor
  PATH Components/Core/Sensor
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
  PATH Components/Core/OS
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
  PATH Components/Core/OS
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
  PATH Components/Core/Driver
  SOURCES 
  Linux/Socket.cpp
)

set_source_files_properties(${PROJECT_SOURCE_DIR}/Components/API/Skeleton/private/TiM5xxSkeleton/TiM5xxSkeleton_Variables.cpp PROPERTIES COMPILE_FLAGS "-Wno-type-limits")

else()
message(FATAL_ERROR "Not supported yet")



endif()


message(STATUS "Will install SSBL to: ${CMAKE_INSTALL_PREFIX}")

CreateLibraryTarget(
  SSBL_BASE_NAME 
    ssbl
  COMPONENTS
    SkeletonApi
    FamilyApiLidar2D
    AutoIp
    Protocol
    Types
    Logger
    Core_OS
    Core_Sensor
    Core_Common
    Core_Driver
)



