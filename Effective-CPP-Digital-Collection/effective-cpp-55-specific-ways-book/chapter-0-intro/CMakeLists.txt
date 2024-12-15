cmake_minimum_required(VERSION 3.8)
project("chapter-0-intro")

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add header files dynamically that under headers directroy
file(GLOB_RECURSE HEADER_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/headers/*)
include_directories(${HEADER_DIRS})

# under src directory ended *.cpp files will be dynamically added to program
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

set(TARGET_NAME "chapter-0-intro_main")
# creates a lib or executable file
add_executable(${TARGET_NAME} ${SOURCES})