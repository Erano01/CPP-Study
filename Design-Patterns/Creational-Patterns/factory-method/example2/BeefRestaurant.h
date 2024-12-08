#pragma once

#include "Restaurant.h"
#include "BeefBurger.h"

//concrete creator
class BeefRestaurant : public Restaurant {
protected:
    std::unique_ptr<Burger> createBurger() const override;
};
