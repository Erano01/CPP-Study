#include "Restaurant.h"
#include <memory>

std::unique_ptr<Burger> Restaurant::orderBurger() {
    std::unique_ptr<Burger> burger = createBurger();
    burger->prepare();
    return burger;
}