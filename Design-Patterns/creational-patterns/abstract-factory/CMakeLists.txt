cmake_minimum_required(VERSION 3.8)
project("abstract-factory")

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add header files directories dynamically (not the files themselves) under headers directory
file(GLOB_RECURSE HEADER_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/**/*.h)

# Extract the directories from the file list and include them
get_filename_component(DIR_LIST "${HEADER_DIRS}" DIRECTORY)
list(REMOVE_DUPLICATES DIR_LIST)
include_directories(${DIR_LIST})

# Gather all cpp files recursively from the project, including main.cpp
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/**/*.cpp)

# Ensure main.cpp is included explicitly
list(FIND SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp" MAIN_CPP_INDEX)
if(MAIN_CPP_INDEX EQUAL -1)
    list(APPEND SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")
endif()

set(TARGET_NAME "abstract-factory_main")

# Create the executable
add_executable(${TARGET_NAME} ${SOURCES})