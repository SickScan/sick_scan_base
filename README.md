# SICK AG Scan Base Library (SSBL)
[![Build status](https://ci.appveyor.com/api/projects/status/2jbep0ss21bh7jxe/branch/master?svg=true)](https://ci.appveyor.com/project/SickScan/sick-scan-base/branch/master)

<b> Experimental support for TiM5xx Family !!! </b>

SSBL is a standalone C++ library to interface with SICK AG Lidar. Currently, SSBL can be built on Windows 10 and Ubuntu 18.04 using a variety of toolchains.  

# Content

1. [Getting Started](#Getting-Started)
    1. [Prerequisites](#Prerequisites)
    2. [Obtain the source code](#Obtain-the-source-code)
    3. [Configure, Build and Install](#Configure,-Build-and-Install)
        1. [Windows](Windows,-Visual-Studio-2015,17,19-IDE,-MSBuild,-and-Visual-C++-or-LLVM-Compiler)
        2. [Linux](Linux,-No-IDE,-Ninja,-GCC)
2. [Using SSBL](#Using-SSBL)
  1. [API](#API)
  2. [Library naming conventions](#Library-naming-conventions)
3. [Licensing](#Licensing)  


# Getting Started

## Prerequisites

Install the required tools:

* [Git >=2.17.1](https://git-scm.com/download/win)
* [CMake >= 3.10](https://cmake.org/download)
* [Ninja >= 1.8.2](https://ninja-build.org) (only on Linux)
  
  ```powershell
  # On Ubuntu these tools can be installed with: 
  sudo apt install git cmake ninja-build
  ```
* On Linux [Visual Studio Code](https://code.visualstudio.com) 
* On Windows [Visual Studio 2015, 2017 or 2019](https://visualstudio.microsoft.com)

Presumably it is not required that your system matches the versions given above perfectly. Those are the version that we currently (Oct. '19) use on Ubuntu 18.04 . 

## Obtain the source code
Fetch the source and change into the newly created folder.
```powershell
git clone https://github.com/SickScan/sick_scan_base.git

mkdir sick_scan_base/build
cd sick_scan_base/build
```

## Configure, Build and Install
CMake is a meta-build system to generate native build system files (MSBuild, ninja, make, etc.). Building CMake projects usually involves two / three steps:
1. A configuration step, in which CMake generates build files for the native build system
2. A build step, in which the native build system is called and the binaries are created
3. An optional installation step in which binaries, headers and other files are copied to a user defined installation directory

Unfortunatelly, CMake is not able to fully abstract the underlying native build system. Therefore, configuration parameters and steps vary slightly between OS / Build System / Compiler. The following sequences will build the library in debug and release mode and install the library in ``sick_scan_base/build/install``.

### Windows, Visual Studio 2015,17,19 IDE, MSBuild, and Visual C++ or LLVM Compiler

1. Configure the project, architecture is set up at configuration time

```powershell
# 64 Bit builds
cmake -G"Visual Studio 16 2019" -A"x64"            -DCMAKE_INSTALL_PREFIX=./install ..
cmake -G"Visual Studio 15 2017 Win64"              -DCMAKE_INSTALL_PREFIX=./install ..
cmake -G"Visual Studio 14 2015 Win64"              -DCMAKE_INSTALL_PREFIX=./install ..
cmake -G"Visual Studio 16 2019" -A"x64" -T"llvm"   -DCMAKE_INSTALL_PREFIX=./install ..  

# 32 Bit builds
cmake -G"Visual Studio 16 2019" -A"Win32"          -DCMAKE_INSTALL_PREFIX=./install .. 
cmake -G"Visual Studio 15 2017"                    -DCMAKE_INSTALL_PREFIX=./install .. 
cmake -G"Visual Studio 14 2015"                    -DCMAKE_INSTALL_PREFIX=./install .. 
cmake -G"Visual Studio 16 2019" -A"Win32" -T"llvm" -DCMAKE_INSTALL_PREFIX=./install .. 
```
2. Build and install the library in debug and release mode
```powershell
cmake --build . --target install --config Debug
cmake --build . --target install --config Release
````

### Linux, No IDE, Ninja, GCC

1. Configure the project, architecture and build mode is set up at configuration time
```console
# 64 Bit builds
cmake -G"Ninja" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=. .. 
# 32 Bit builds
cmake -G"Ninja" -DSSBL_32BIT -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=. ..  
```
2. Build and install the library
```powershell
cmake --build . --target install
```
3. Reconfigure the project to be build in release mode 
```console
# 64 Bit builds
cmake -G"Ninja" -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=. .. 
# 32 Bit builds
cmake -G"Ninja" -DSSBL_32BIT -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=. ..  
```
4. Build and install the library
```powershell
cmake --build . --target install
```

## Using SSBL

### API Structure
Please see the examples in *src/examples* on how to use the APIs from C++.

Here's a short note on the intended API structure and usage.

#### Skeleton API:
The skeleton API resides on the lowest level. As the name implies, it allows direct access to the functions and variables of a sensor and hides all protocol specific operations like de-/serialization, networking etc. from a user (overloaded constructors allow detailed access if required). In addition to that, getter / setter functions have been added to allow element access by name. Another benefit of using the setter functions is that we can catch invalid user inputs before they are sent to device.
#### Family API:
Being able to easily access the functions and variables of a sensor is nice, but not very helpful if one does not know in which order commands have to be sent to the sensor. That is the point where the Family API comes in. The Family API wraps around the skeleton and adds all the tiny steps that are required to start, stop and configure a sensor. Thereby, giving a user some sort of high-level “works with zero knowledge” entry point to interface to each sensor family.
#### Intended use
SSBL exists to provide users a straightforward solution to get up and running with our sensors quick and easily. Thereby, enabling them to put their time into finding the best solution for their application not into messing around with some sort of vendor specific protocol. However, it does not aim to provide production code or to solve a particular application. If it still does – great – but it should more be considered a reference / template from which you can copy some code or at least figure out the command sequences required to accomplish your goals.


### Library naming conventions
The library employs the following naming scheme:
```bash
 ssbl-windows-i368-msvc-142-dbg.suffix (*.a or *.lib depending on Compiler)
 │       │     │     │   │   └── Build Configuration (dbg or rel)
 │       │     │     │   └── Compiler Version  
 │       │     │     └── Compiler (msvc, gcc, llvm)
 │       │     └── Target Architecture (x64, i386, ARM)
 │       └── Target OS (Windows, Linux)
 └── Sick Scan Base Library
 ```

## Licensing

SSBL is licensed under the permissive Apache License V2.0. The library itself relies only on standard libraries. Efforts have been made to mention the authors of unlicensed code snippets that have been found online and integrated into SSBL. Please create an issue if you feel that your work has not been mentioned appropriately.  

Contrary, the examples make use of other 3rd party libraries that come with their own licenses.
