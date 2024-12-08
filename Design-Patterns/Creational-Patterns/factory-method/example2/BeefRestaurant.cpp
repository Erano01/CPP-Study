#include "BeefRestaurant.h"
#include <memory> //for smart pointer

std::unique_ptr<Burger> BeefRestaurant::createBurger() const {
	//if you dont want to use smart pointer:
	//you can return new BeefBurger() basically
	return std::make_unique<BeefBurger>();
}