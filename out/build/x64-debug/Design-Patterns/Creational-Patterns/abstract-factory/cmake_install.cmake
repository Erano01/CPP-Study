# Install script for directory: C:/CppWorkspace-VisualStudio2022/CPP-Study/Design-Patterns/Creational-Patterns/abstract-factory

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/CppWorkspace-VisualStudio2022/CPP-Study/out/install/x64-debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Creational-Patterns/abstract-factory/example1/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Creational-Patterns/abstract-factory/example2/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Creational-Patterns/abstract-factory/example3/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Creational-Patterns/abstract-factory/example4/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Creational-Patterns/abstract-factory/example5/cmake_install.cmake")

endif()

