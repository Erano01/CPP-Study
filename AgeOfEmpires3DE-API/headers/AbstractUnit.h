#pragma once
class AbstractUnit {
protected:
	int hitpoint;
	int lineOfSight;
	int range;
	double speed;
	virtual void summon(double locationX, double locationY, double locationZ) = 0;
};