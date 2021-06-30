.. raw:: html

  <embed>
    

    <table class="tg">
      <tr>
        <th class="tg-0pky">Library</th>
        <th class="tg-0pky">Ext. Link</th>
        <th class="tg-0pky">Documentation</th>
        <th class="tg-0pky">License</th>
        <th class="tg-0pky" style='width: 100%;' rowspan="5"><img src="doc/img/SICK_Logo_Claim_RGB.png" align="right"  height="120"/></th>
      </tr>
      <tr>
        <td class="tg-0pky">
          <img src="https://ci.appveyor.com/api/projects/status/2jbep0ss21bh7jxe/branch/master?svg=true"/>
        </td>
        <td class="tg-0pky">
          <img src="https://ci.appveyor.com/api/projects/status/7uy0pko38t6oot6i/branch/master?svg=true"/>
        </td>
        <td class="tg-0pky">
          <img src="https://readthedocs.org/projects/sick-scan-documentation/badge/?version=latest"/>
        </td>

        <td class="tg-0pky">
          <img src="https://img.shields.io/badge/License-Apache%202.0-blue.svg"/>
        </td>
      </tr>
    </table>
    
    
    <p style="margin-bottom:1cm;"/p>
  </embed>


SICK AG Scan Base Library (SSBL)
================================

**Experimental support for TiM5xx Family !!!**

SSBL is a standalone C++ library to interface with SICK AG Lidar. Currently, SSBL can be built on Windows 10 and Ubuntu 18.04 using a variety of toolchains. The complete documentation can be found `here. <https://sick-scan-documentation.readthedocs.io/en/latest>`_


Getting Started (x86/x64, Windows/Linux)
----------------------------------------

Prerequisites
~~~~~~~~~~~~~

Install the required tools:

- `GIT (>=2.17.1) <https://git-scm.com/downloads>`_
- `CMake (>= V3.10) <https://cmake.org/download>`_ 
- `Python (>= V3.7) <https://www.python.org/downloads/>`_ (optional)
- `Ninja (>= 1.8.2) <https://ninja-build.org>`_ (Linux)

  .. code-block:: console

    # On Ubuntu these tools can be installed with:
    sudo apt install git cmake ninja-build

- IDE / Compiler
    - Linux `Visual Studio Code <https://code.visualstudio.com>`_
    - Windows `Visual Studio 2015, 2017 or 2019 <https://visualstudio.microsoft.com>`_

  .. code-block:: console

    # Presumably it is not required that your system matches the versions given above perfectly. 
    # Those are the version that we currently (Oct. '19) use on Ubuntu 18.04 .

Obtain the source code
~~~~~~~~~~~~~~~~~~~~~~
Fetch the source and change into the newly created folder. There are path lengths limitations when using Windows. To avoid them, make sure to execute the following commands at the top level of your drive (for example "C:\\").   

.. code-block:: console

  git clone https://github.com/SickScan/sick_scan_base.git ssbl

  cd ssbl
  mkdir build
  cd build


Configure, Build and Install
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
CMake is a meta-build system to generate native build system files (MSBuild, ninja, make, etc.). Building CMake projects usually involves two / three steps:

1. A configuration step, in which CMake generates build files for the native build system
2. A build step, in which the native build system is called and the binaries are created
3. An optional installation step in which binaries, headers and other files are copied to a user defined installation directory

Unfortunatelly, CMake is not able to fully abstract the underlying native build system. Therefore, configuration parameters and steps vary slightly between OS / Build System / Compiler. The following sequences will build the library in debug and release mode and install the library in ``sick_scan_base/build/install``.

Windows, Visual Studio 2015,17,19 IDE, MSBuild, and Visual C++ or LLVM Compiler
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

1. Configure the project, architecture is set up at configuration time

.. code-block:: console

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


2. Build and install the library in debug and release mode

.. code-block:: console

  cmake --build . --target install --config Debug
  cmake --build . --target install --config Release


Linux, No IDE, Ninja, GCC
"""""""""""""""""""""""""

1. Configure the project, architecture and build mode is set up at configuration time

.. code-block:: console

  # 64 Bit builds
  cmake -G"Ninja" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=./install ..
  
  # 32 Bit builds
  cmake -G"Ninja" -DSSBL_32BIT=1 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=./install ..  

2. Build and install the library

.. code-block:: console

  cmake --build . --target install

3. Reconfigure the project to be build in release mode

.. code-block:: console

  # 64 Bit builds
  cmake -G"Ninja" -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=./install ..
  # 32 Bit builds
  cmake -G"Ninja" -DSSBL_32BIT -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=./install ..  

4. Build and install the library

.. code-block:: console

  cmake --build . --target install




