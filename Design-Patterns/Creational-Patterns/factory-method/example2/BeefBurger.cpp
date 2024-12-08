#include "BeefBurger.h"

BeefBurger::BeefBurger() {
	std::cout << "BeefBurger instance created" << std::endl;
}

std::string BeefBurger::getAddOns() const{
	return "Cheese, Bacon";
}

int BeefBurger::getProductId() const{
	//you can set product Id when burger created, its not important for this pattern showcasing
	return 0;
}

void BeefBurger::prepare() const {
	std::cout << "BeefBurger is about to prepare, please wait till task proceed!" << std::endl;
}