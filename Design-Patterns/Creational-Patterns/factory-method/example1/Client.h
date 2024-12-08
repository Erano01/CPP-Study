#pragma once
#include <memory>
#include "Document.h"

//Abstract Creator
class Client {
public:
    virtual ~Client() = default;

    virtual std::unique_ptr<Document> createDocument() = 0;

    void openDocument(std::unique_ptr<Document>& document) {
        document->open();
    }

    std::unique_ptr<Document> newDocument() {
        return createDocument();
    }
};
