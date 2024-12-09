#include <iostream>
#include <example1/AdobeAcrobatClient.h>
#include <example2/BeefRestaurant.h>
#include <example2/VeggieRestaurant.h>
#include <example3/MessageFactory.h>
#include <example3/TextMessageFactory.h>
#include <example3/JsonMessageFactory.h>

int main() {

    std::cout << "--------------" << std::endl;
    std::cout << "--Example 1 ->" << std::endl;
    std::cout << "--------------" << std::endl;

    //ex1
    AdobeAcrobatClient adobeAcrobatClient;
    auto document = adobeAcrobatClient.newDocument();
    adobeAcrobatClient.openDocument(document);

    std::cout << "--------------" << std::endl;
    std::cout << "--Example 2 ->" << std::endl;
    std::cout << "--------------" << std::endl;

    //ex2
    BeefRestaurant beefResto;
    auto beefBurger = beefResto.orderBurger();
    VeggieRestaurant veggieResto;
    auto veggieBurger = veggieResto.orderBurger();

    std::cout << "--------------" << std::endl;
    std::cout << "--Example 3 ->" << std::endl;
    std::cout << "--------------" << std::endl;

    //ex3
    std::unique_ptr<MessageFactory> textFactory = std::make_unique<TextMessageFactory>();
    std::unique_ptr<Message> textMsg = textFactory->getMessage();
    std::cout << "Text Message Content: " << textMsg->getContent() << std::endl;

    std::unique_ptr<MessageFactory> jsonFactory = std::make_unique<JsonMessageFactory>();
    std::unique_ptr<Message> jsonMsg = jsonFactory->getMessage();
    std::cout << "JSON Message Content: " << jsonMsg->getContent() << std::endl;


    return 0;
}