#pragma once
#include "AbstractUnit.h"

class LandMilitary : public AbstractUnit{
protected:
	virtual void takeDamage(AbstractUnit* from);
	virtual void handAttack(AbstractUnit* to);
};