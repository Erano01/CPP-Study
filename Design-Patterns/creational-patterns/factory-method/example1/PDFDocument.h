#pragma once
#include "Document.h"

class PDFDocument : public Document {
public:
    PDFDocument() {
        std::cout << "PDFDocument Created!" << std::endl;
    }
    void open() override {
        std::cout << "PDFDocument Opened!" << std::endl;
    }
    void close() override {
        std::cout << "PDFDocument Closed!" << std::endl;
    }
    void save() override {
        std::cout << "PDFDocument Saved!" << std::endl;
    }
    void revert() override {
        std::cout << "PDFDocument Reverted!" << std::endl;
    }
};
