#include <iostream>
#include <example1/AdobeAcrobatClient.h>
#include <example2/BeefRestaurant.h>
#include <example2/VeggieRestaurant.h>

int main() {
    //ex1
    AdobeAcrobatClient adobeAcrobatClient;
    auto document = adobeAcrobatClient.newDocument();
    adobeAcrobatClient.openDocument(document);

    //ex2
    BeefRestaurant beefResto;
    auto beefBurger = beefResto.orderBurger();
    VeggieRestaurant veggieResto;
    auto veggieBurger = veggieResto.orderBurger();

    return 0;
}