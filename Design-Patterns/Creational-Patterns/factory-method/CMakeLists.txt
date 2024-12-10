# Define the executable
add_executable(factory-method_main 
    main.cpp
    "example4/TextManipulator.cpp"
    "example4/LineManipulator.cpp"
    "example5/JoshuaDocument.cpp"

)
# Include directories for the headers
target_include_directories(factory-method_main PRIVATE 
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