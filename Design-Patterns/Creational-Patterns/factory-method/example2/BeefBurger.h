#pragma once
#include "Burger.h"
#include <iostream>

//concrete product
class BeefBurger : public Burger {
public:
	BeefBurger();
	int getProductId() const override;
	std::string getAddOns() const override;
	void prepare() const override;
};
