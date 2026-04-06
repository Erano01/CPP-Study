#include "TextManipulator.h"
#include <iostream>

// Constructor
TextManipulator::TextManipulator(int width, const std::string& color)
    : textWidth(width), textColor(color) {
}

//implementing pure virtual methods that we override from parent 
void TextManipulator::downClick() {
    std::cout << "TextManipulator: downClick called with text width = "
        << textWidth << ", color = " << textColor << std::endl;
}
void TextManipulator::drag() {
    std::cout << "TextManipulator: drag called with text width = "
        << textWidth << ", color = " << textColor << std::endl;
}
void TextManipulator::upClick() {
    std::cout << "TextManipulator: upClick called with text width = "
        << textWidth << ", color = " << textColor << std::endl;
}

//getter setter
int TextManipulator::getTextWidth() const {
    return textWidth;
}

std::string TextManipulator::getTextColor() const {
    return textColor;
}
void TextManipulator::setTextWidth(int width) {
    textWidth = width;
}

void TextManipulator::setTextColor(const std::string& color) {
    textColor = color;
}
