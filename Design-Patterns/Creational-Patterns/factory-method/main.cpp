#include <iostream>
#include "example1/AdobeAcrobatClient.h"
#include "example2/BeefRestaurant.h"
#include "example2/VeggieRestaurant.h"
#include "example3/MessageFactory.h"
#include "example3/TextMessageFactory.h"
#include "example3/JsonMessageFactory.h"
#include "example4/Figure.h"
#include "example4/TextFigure.h"
#include "example4/LineFigure.h"
#include "example5/JoshuaDocument.h"

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

    std::cout << "--------------" << std::endl;
    std::cout << "--Example 4 ->" << std::endl;
    std::cout << "--------------" << std::endl;

    //ex4
    std::unique_ptr<Figure> textFigure = std::make_unique<TextFigure>(); //Factory for TextManipulator
    std::unique_ptr<Manipulator> textManipulator = textFigure->getManipulator();
    textManipulator->downClick();
    textManipulator->upClick();
    textManipulator->drag();

    std::unique_ptr<Figure> lineFigure = std::make_unique<LineFigure>(); //Factory for TextManipulator
    std::unique_ptr<Manipulator> lineManipulator = lineFigure->getManipulator();
    lineManipulator->downClick();
    lineManipulator->upClick();
    lineManipulator->drag();

    std::cout << "--------------" << std::endl;
    std::cout << "--Example 5 ->" << std::endl;
    std::cout << "--------------" << std::endl;

    //ex5
    auto wordDoc = JoshuaDocument::createWordDocument("Document1");
    auto pdfDoc = JoshuaDocument::createPdfDocument("Document2");
    auto excelDoc = JoshuaDocument::createExcelDocument("Document3");

    std::cout << wordDoc->toString() << std::endl;
    std::cout << pdfDoc->toString() << std::endl;
    std::cout << excelDoc->toString() << std::endl;

    return 0;
}