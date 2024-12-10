set(TARGET_NAME "abstract-factory_main")

add_executable(${TARGET_NAME}
    main.cpp
)
# Include directories for the headers
target_include_directories(${TARGET_NAME} PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
    "example1"
    "example2"
    "example3"
    "example4"
    "example5"
)

#add sub directories
add_subdirectory("example1")
add_subdirectory("example2")
add_subdirectory("example3")
add_subdirectory("example4")
add_subdirectory("example5")