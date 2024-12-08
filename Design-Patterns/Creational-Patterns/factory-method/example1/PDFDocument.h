#pragma once
#include "Document.h"

class PDFDocument : public Document {
public:
    PDFDocument();
    void open() override;
    void close() override;
    void save() override;
    void revert() override;
};
