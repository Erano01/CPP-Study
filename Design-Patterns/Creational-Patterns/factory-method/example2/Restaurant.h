#pragma once //include guard -> you can also use ifndef stuff
#include <memory> //for smart pointer
#include "Burger.h"

//abstract creator
class Restaurant {
public:
	virtual ~Restaurant() = default;
	std::unique_ptr<Burger> orderBurger(); //you can use Burger* instead of smart pointer
protected:
	virtual std::unique_ptr<Burger> createBurger() const = 0;

};
