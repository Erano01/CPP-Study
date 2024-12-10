#pragma once
#include <iostream>
//abstract product
class Manipulator {
public:
	virtual ~Manipulator() = default;
	virtual void downClick() = 0;
	virtual void drag() = 0;
	virtual void upClick() = 0;
};