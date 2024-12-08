# Install script for directory: C:/CppWorkspace-VisualStudio2022/CPP-Study/Design-Patterns/Behavioral-Patterns

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
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/chain-of-responsibility/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/command/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/interpreter/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/iterator/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/mediator/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/memento/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/observer/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/state/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/strategy/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/template-method/cmake_install.cmake")
  include("C:/CppWorkspace-VisualStudio2022/CPP-Study/out/build/x64-debug/Design-Patterns/Behavioral-Patterns/visitor/cmake_install.cmake")

endif()

