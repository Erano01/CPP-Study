#pragma once
#include "AbstractLandMilitary.h"

class AbstractRangedMilitary : public AbstractLandMilitary {
public:
	virtual void rangedAttack() = 0;
};