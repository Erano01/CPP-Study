#pragma once //include guard -> you can also use ifndef stuff
#include <memory> //for smart pointer
#include "Burger.h"

//abstract creator
class Restaurant {
protected:
	virtual std::unique_ptr<Burger> createBurger() const = 0;
public:
	virtual ~Restaurant() = default;
	std::unique_ptr<Burger> orderBurger() {
		std::unique_ptr<Burger> burger = createBurger();
		burger->prepare();
		return burger;
	};
};
