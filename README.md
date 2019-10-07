# SICK AG Scan Base Library (SSBL)
[![Build status](https://ci.appveyor.com/api/projects/status/s5kj88sfo6xdv4da/branch/master?svg=true)](https://ci.appveyor.com/project/Kaidoho/ssbl/branch/master)

<b> Experimental support for TiM5xx Family !!! </b>



## Getting Started - Windows 10


### Prerequisites

Install the required tools:


* [Git](https://git-scm.com/download/win)
* [CMake >= 3.10](https://cmake.org/download)
* A Compiler / IDE of your choice (see table below). Plain VS2019 with it's built-in Visual C++ 14.2 or flavored with LLVM is recommended.


|                                   | Visual C++  14.2 | Visual C++  14.1 | Visual C++  14.0 | [LLVM](https://llvm.org) | [Mingw-w64](https://mingw-w64.org/doku.php) |
|--------------------------------------|:----------------:|:----------------:|:----------------:|------|-----------|
| [Visual Studio 2019 Community Edition](https://visualstudio.microsoft.com) |         o        |         o        |         o        |   o  |     x     |
| [Visual Studio 2017 Community Edition](https://visualstudio.microsoft.com)  |         o        |         o        |         o        |   [Plugin](https://marketplace.visualstudio.com/items?itemName=LLVMExtensions.llvm-toolchain)  |     x     |
| [Visual Studio 2015 Community Edition](https://visualstudio.microsoft.com)  |         o        |         o        |         o        |   x  |     x     |
| [Eclipse for C++](https://www.eclipse.org/downloads/)                              |         x        |         x        |         x        |   x  |    o     |


o = Built-in or available via plugin | x = not supported     
*Some notes on [VS2019 + LLVM](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio) and [VS2017 + LLVM](https://marketplace.visualstudio.com/items?itemName=LLVMExtensions.llvm-toolchain) can be found here.*


### Obtain the source and build
Fetch the source and change into the newly created folder.
```powershell
git clone https://github.com/kaidoho/ssbl.git
cd ssbl
```
Call cmake to generate a project matching your favorite IDE / Compiler.
```powershell
# 64 Bit builds
cmake -G"Visual Studio 16 2019" -A"x64" -Bbuild src            
cmake -G"Visual Studio 15 2017 Win64" -Bbuild src                
cmake -G"Visual Studio 14 2015 Win64" -Bbuild src                
cmake -G"Visual Studio 16 2019" -A"x64" -T"llvm" -Bbuild src       
cmake -G"Eclipse CDT4 - MinGW Makefiles" -Bbuild src               

# 32 Bit builds
cmake -G"Visual Studio 16 2019" -A"Win32" -Bbuild src
cmake -G"Visual Studio 15 2017" -Bbuild src
cmake -G"Visual Studio 14 2015" -Bbuild src
cmake -G"Visual Studio 16 2019" -A"Win32" -T"llvm" -Bbuild src
cmake -G"Eclipse CDT4 - MinGW Makefiles" -DSSBL_32BIT -Bbuild src
```
Build the project
```powershell
cmake --build build
```

## Getting Started - Linux (Ubuntu 18.04)

### Prerequisites

Install the required tools:

```console
$ sudo apt-get install cmake git ninja-build build-essential default-jdk
```

### Obtain the source and build
```console
$ git clone https://github.com/kaidoho/ssbl.git
$ mkdir ssbl/Build
$ cd ssbl/Build
$ cmake -G"Eclipse CDT4 - Ninja" -DCMAKE_BUILD_TYPE=Debug ../src
```

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

### API Structure

A short note on the intended API structure.
#### Skeleton API:
The skeleton API resides on the lowest level. A skeleton is created from an XML device description. It allows direct access to the functions and variables of a sensor. In addition to that, this layer already hides all protocol specific operations like de-/serialization, networking etc. However, the skeleton constructors should be overloaded to allow a fine grained user access in case that the user is for some reason required to manually set up the protocol type, buffer size etc. If the device provides ColaA and B we’ll use B (protocol switching still needs to be implemented). If CoLa2 is available, we should stick to CoLa2 (implementation will not differ a lot from ColaB).
#### Convenience API:
Basically the Skeleton API flavoured with element access by name. The getter setter methods for variables allows us to catch invalid user inputs (yeah not fully true as some variables are defined for a whole family within the XML, but it’s better than nothing).
#### Scanner API:
I think we should have for each family (scanner, radar) a toplevel API giving the user some sort of “works with zero knowledge” entry – much like the gerneric lidar in ros. For example a scanner object could provide only a few methods like Start, Stop, SetConfiguration and we encapsulate all the required steps (like scan event registration and putting the device in measurement mode).
Despite this bottom up description I’d say that the examples should come top down.
