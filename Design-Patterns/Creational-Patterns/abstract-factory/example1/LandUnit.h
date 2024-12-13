#pragma once
#include <iostream>
#include "Unit.h"

//product
class LandUnit : Unit{
protected:
	virtual void move() = 0;
	virtual void rangedAttack(int range) = 0;
	virtual void siegeAttack() = 0;
	virtual void meleeAttack() = 0;

};