# SICK AG Scan Base Library (SSBL)
[![Build status](https://ci.appveyor.com/api/projects/status/2jbep0ss21bh7jxe/branch/master?svg=true)](https://ci.appveyor.com/project/SickScan/sick-scan-base/branch/master)

<b> Experimental support for TiM5xx Family !!! </b>

SSBL is a standalone C++ library to interface with SICK AG Lidar. Currently, SSBL can be built on Windows 10 and Ubuntu 18.04 using a variety of toolchains.  


## Content

1. [Getting Started on Windows](#Getting-Started-(Windows-10))
1. [Getting Started on Linux](#Getting-Started-(Ubuntu-18.04))
2. [Using SSBL](#Using-SSBL)
  1. [API](#API)
  2. [Library naming conventions](#Library-naming-conventions)
3. [Licensing](#Licensing)  



## Getting Started

### Prerequisites

Install the required tools:

* [Git](https://git-scm.com/download/win)
* [CMake >= 3.10](https://cmake.org/download)
* A Compiler / IDE of your choice (see table below). Plain VS2019 with it's built-in Visual C++ 14.2 or flavored with LLVM is recommended.

|                                   | Visual C++  14.2 | Visual C++  14.1 | Visual C++  14.0 | [LLVM](https://llvm.org) | [Mingw-w64](https://mingw-w64.org/doku.php) |
|--------------------------------------|:----------------:|:----------------:|:----------------:|:------:|:-----------:|
| [Visual Studio 2019 Community Edition](https://visualstudio.microsoft.com) |         o        |         o        |         o        |   o  |     x     |
| [Visual Studio 2017 Community Edition](https://visualstudio.microsoft.com)  |         x        |         o        |         o        |   [Plugin](https://marketplace.visualstudio.com/items?itemName=LLVMExtensions.llvm-toolchain)  |     x     |
| [Visual Studio 2015 Community Edition](https://visualstudio.microsoft.com)  |         x        |         x        |         o        |   x  |     x     |



o = Built-in or available via plugin | x = not supported     
*Some notes on [VS2019 + LLVM](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio) and [VS2017 + LLVM](https://marketplace.visualstudio.com/items?itemName=LLVMExtensions.llvm-toolchain) can be found here.*


### Obtain the source and build
Fetch the source and change into the newly created folder.
```powershell
git clone https://github.com/SickScan/sick_scan_base.git
mkdir sick_scan_base/build
cd sick_scan_base/build
```

### Configuration when using Visual Studio IDE 2015, 2017 or 2019 
Call cmake to generate a project matching your favorite IDE / Compiler. 
```powershell
# 64 Bit builds
cmake -G"Visual Studio 16 2019" -A"x64"            -DCMAKE_INSTALL_PREFIX=. ..
cmake -G"Visual Studio 15 2017 Win64"              -DCMAKE_INSTALL_PREFIX=. ..
cmake -G"Visual Studio 14 2015 Win64"              -DCMAKE_INSTALL_PREFIX=. ..
cmake -G"Visual Studio 16 2019" -A"x64" -T"llvm"   -DCMAKE_INSTALL_PREFIX=. ..  

# 32 Bit builds
cmake -G"Visual Studio 16 2019" -A"Win32"          -DCMAKE_INSTALL_PREFIX=. .. 
cmake -G"Visual Studio 15 2017"                    -DCMAKE_INSTALL_PREFIX=. .. 
cmake -G"Visual Studio 14 2015"                    -DCMAKE_INSTALL_PREFIX=. .. 
cmake -G"Visual Studio 16 2019" -A"Win32" -T"llvm" -DCMAKE_INSTALL_PREFIX=. .. 
```
### Build and Install the project
```powershell
cmake --build . --target install --config Debug
cmake --build . --target install --config Release
````

### Configuration when using Visual Studio Code, Ninja and GCC 

```console

# 64 Bit builds

cmake -G"Ninja" -DCMAKE_INSTALL_PREFIX=. .. 

# 32 Bit builds
cmake -G"Ninja" -DSSBL_32BIT -DCMAKE_INSTALL_PREFIX=. ..  
```


### Build and Install the project
```powershell
cmake --build . --target install --config Debug
cmake --build . --target install --config Release
```





### Prerequisites

Install the required tools:

```console
sudo apt-get install cmake git ninja-build build-essential default-jdk
```

### Obtain the source and build
```console
git clone https://github.com/kaidoho/ssbl.git
mkdir ssbl/build
cd ssbl/build
cmake -G"Eclipse CDT4 - Ninja" -DCMAKE_BUILD_TYPE=Debug ../src
cmake --build . --target install
cmake -G"Eclipse CDT4 - Ninja" -DCMAKE_BUILD_TYPE=Release ../src
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
