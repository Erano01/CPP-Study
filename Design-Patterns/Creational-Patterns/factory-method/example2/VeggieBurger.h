#pragma once
#include "Burger.h"
#include <iostream>

//concrete product
class VeggieBurger : public Burger {
public:
	VeggieBurger();
	int getProductId() const override;
	std::string getAddOns() const override;
	void prepare() const override;
};