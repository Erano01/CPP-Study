#pragma once
#include "Unit.h"
#include <memory>

class LandMilitary : public Unit{
protected:
	virtual void takeDamage(Unit* from);
	virtual void handAttack(Unit* to);

};