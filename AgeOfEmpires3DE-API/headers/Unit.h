#pragma once
#include <string>
class Unit {
protected:
	int hitpoint;
	int lineOfSight;
	int range = lineOfSight - 2;
	double speed;

	virtual void summon(double locationX, double locationY, double locationZ) = 0;
public:
	std::string test() {
		return "test";
	}
};