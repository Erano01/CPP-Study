#include "PDFDocument.h"

PDFDocument::PDFDocument() {
    std::cout << "PDFDocument Created!" << std::endl;
}

void PDFDocument::open() {
    std::cout << "PDFDocument Opened!" << std::endl;
}

void PDFDocument::close() {
    std::cout << "PDFDocument Closed!" << std::endl;
}

void PDFDocument::save() {
    std::cout << "PDFDocument Saved!" << std::endl;
}

void PDFDocument::revert() {
    std::cout << "PDFDocument Reverted!" << std::endl;
}
