set(TARGET_NAME "abstract-factory_main")

add_executable(${TARGET_NAME}
    main.cpp
 "example1/LandUnit.h" "example1/NavalUnit.h" "example1/Unit.h" "example1/NeutralUnit.h" "example1/PassiveUnit.h" "example1/Header1.h")
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