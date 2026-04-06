#pragma once
#include "Client.h"
#include "PDFDocument.h"

class AdobeAcrobatClient : public Client {
public:
    std::unique_ptr<Document> createDocument() override {
        return std::make_unique<PDFDocument>();
    };
};
