#pragma once
#include "Figure.h"
#include "TextManipulator.h"

//concrete factory
// TextFigure == LineManipulatorFactory
class TextFigure : public Figure {
public:
	std::unique_ptr<Manipulator> createManipulator() override {
		return std::make_unique<TextManipulator>();
	}
};