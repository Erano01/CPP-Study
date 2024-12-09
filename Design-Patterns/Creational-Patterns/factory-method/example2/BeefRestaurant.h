#pragma once
#include "Restaurant.h"
#include "BeefBurger.h"

//concrete creator
class BeefRestaurant : public Restaurant {
protected:
    //we are using smart pointers instead of raw pointer.
    std::unique_ptr<Burger> createBurger() const override {
        return std::make_unique<BeefBurger>();
    };
};
