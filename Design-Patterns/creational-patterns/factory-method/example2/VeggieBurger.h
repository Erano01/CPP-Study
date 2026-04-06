#pragma once
#include "Burger.h"
#include <iostream>

//concrete product
class VeggieBurger : public Burger {
public:
	VeggieBurger() {
		std::cout << "VeggieBurger instance created" << std::endl;
	};
	std::string getAddOns() const override{
		return "Lettuce, Tomato, Onion";
	}

	int getProductId() const override {
		//you can set product Id when burger created, its not important for this pattern showcasing
		return 0;
	}

	void prepare() const override {
		std::cout << "VeggieBurger is about to prepare, please wait till task proceed!" << std::endl;
	}
};