#pragma once
#include "Burger.h"
#include <iostream>

//concrete product
class BeefBurger : public Burger {
public:
	BeefBurger() {
		std::cout << "BeefBurger instance created" << std::endl;
	};
	std::string getAddOns() const override {
		return "Cheese, Bacon";
	}
	int getProductId() const override {
		//you can set product Id when burger created, its not important for this pattern showcasing
		return 0;
	}
	void prepare() const override {
		std::cout << "BeefBurger is about to prepare, please wait till task proceed!" << std::endl;
	}
};
