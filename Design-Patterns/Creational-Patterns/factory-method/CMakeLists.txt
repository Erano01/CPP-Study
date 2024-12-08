# Create an executable for the pattern
add_executable(factory-method_main main.cpp "example1/Document.cpp" "example1/PDFDocument.cpp"  "example1/AdobeAcrobatClient.cpp" "example1/Document.h" "example1/PDFDocument.h" "example1/Client.h" "example1/AdobeAcrobatClient.h")

# Include directories if needed
target_include_directories(factory-method_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

#add sub directories
add_subdirectory("example1")
add_subdirectory("example2")
add_subdirectory("example3")
add_subdirectory("example4")
add_subdirectory("example5")