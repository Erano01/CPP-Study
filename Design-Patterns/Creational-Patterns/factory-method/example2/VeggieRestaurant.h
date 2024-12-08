#pragma once
#include "Restaurant.h"
#include "VeggieBurger.h"
#include <memory>

//concrete creator
class VeggieRestaurant : public Restaurant {
protected:
    std::unique_ptr<Burger> createBurger() const override;
};