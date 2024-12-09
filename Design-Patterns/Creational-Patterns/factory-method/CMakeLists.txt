# Create an executable for the pattern
add_executable(factory-method_main main.cpp  "example1/PDFDocument.cpp"  "example1/AdobeAcrobatClient.cpp" "example1/Document.h" "example1/PDFDocument.h" "example1/Client.h" "example1/AdobeAcrobatClient.h" "example2/Burger.h" "example2/BeefBurger.h" "example2/VeggieBurger.h" "example2/BeefBurger.cpp" "example2/VeggieBurger.cpp" "example2/Restaurant.h" "example2/BeefRestaurant.h" "example2/Restaurant.cpp" "example2/VeggieRestaurant.h" "example2/BeefRestaurant.cpp" "example2/VeggieRestaurant.cpp" "example3/Message.h" "example3/TextMessage.h"   "example3/JsonMessage.h" "example3/MessageFactory.h"   "example3/JsonMessageFactory.h" "example3/TextMessageFactory.h")

# Include directories if needed
target_include_directories(factory-method_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

#add sub directories
add_subdirectory("example1")
add_subdirectory("example2")
add_subdirectory("example3")
add_subdirectory("example4")
add_subdirectory("example5")