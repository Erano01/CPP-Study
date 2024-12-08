#include "VeggieRestaurant.h"

std::unique_ptr<Burger> VeggieRestaurant::createBurger() const {
    return std::make_unique<VeggieBurger>();
}