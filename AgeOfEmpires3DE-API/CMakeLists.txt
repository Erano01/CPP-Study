cmake_minimum_required(VERSION 3.8)
project(AgeOfEmpires3DE-API)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add specific include directories (manual header directory adding method)
include_directories(AgeOfEmpires3DE-API PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/headers
	#${CMAKE_CURRENT_SOURCE_DIR}/headers/core
    #${CMAKE_CURRENT_SOURCE_DIR}/headers/io
)
# add header files dynamically that under headers directroy
file(GLOB_RECURSE HEADER_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/headers/*)
include_directories(${HEADER_DIRS})

# under src directory ended *.cpp files will be dynamically added to program
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# creates a lib or executable file
add_executable(AgeOfEmpires3DE-API ${SOURCES})

