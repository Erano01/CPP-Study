#include "VeggieBurger.h"

VeggieBurger::VeggieBurger() {
	std::cout << "VeggieBurger instance created" << std::endl;
}

std::string VeggieBurger::getAddOns() const{
	return "Lettuce, Tomato, Onion";
}

int VeggieBurger::getProductId() const{
	//you can set product Id when burger created, its not important for this pattern showcasing
	return 0;
}

void VeggieBurger::prepare() const {
	std::cout << "VeggieBurger is about to prepare, please wait till task proceed!" << std::endl;
}