#pragma once
#include "Manipulator.h"
#include <memory>
//abstract creator(factory)
//Figure == ManipulatorFactory
class Figure {
protected:
	virtual std::unique_ptr<Manipulator> createManipulator() = 0;
public:
	virtual ~Figure() = default;	
	std::unique_ptr<Manipulator> getManipulator() {
		auto figure = createManipulator();
		return figure;
	}

};
