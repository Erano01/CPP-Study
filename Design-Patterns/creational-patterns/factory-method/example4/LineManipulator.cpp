#include "LineManipulator.h"
#include <iostream>

LineManipulator::LineManipulator(int width, const std::string& color)
	: lineWidth(width), lineColor(color) {
}
//implementing pure virtual methods that we override from parent 
void LineManipulator::downClick() {
	std::cout << "LineManipulator: downClick called with line width = "
		<< lineWidth << ", color = " << lineColor << std::endl;
}
void LineManipulator::upClick() {
	std::cout << "LineManipulator: upClick called with line width = "
		<< lineWidth << ", color = " << lineColor << std::endl;
}
void LineManipulator::drag() {
	std::cout << "LineManipulator: drag called with line width = "
		<< lineWidth << ", color = " << lineColor << std::endl;
}
//getter setters
int LineManipulator::getLineWidth() const {
	return lineWidth;
}
void LineManipulator::setLineWidth(int width) {
	lineWidth = width;
}
std::string LineManipulator::getLineColor() const {
	return lineColor;
}
void LineManipulator::setLineColor(const std::string& color) {
	lineColor = color;
}