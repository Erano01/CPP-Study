#pragma once
#include "Figure.h"
#include "LineManipulator.h"

//concrete factory
// LineFigure == LineManipulatorFactory
class LineFigure : public Figure {
public:
	std::unique_ptr<Manipulator> createManipulator() override {
		return std::make_unique<LineManipulator>();
	}
};