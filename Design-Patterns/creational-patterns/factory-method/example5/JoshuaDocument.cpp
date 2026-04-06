#include "JoshuaDocument.h"

// Factory method implementations
std::unique_ptr<JoshuaDocument> JoshuaDocument::createWordDocument(const std::string& name) {
    return std::make_unique<JoshuaWordDocument>(name);
}

std::unique_ptr<JoshuaDocument> JoshuaDocument::createPdfDocument(const std::string& name) {
    return std::make_unique<JoshuaPDFDocument>(name);
}

std::unique_ptr<JoshuaDocument> JoshuaDocument::createExcelDocument(const std::string& name) {
    return std::make_unique<JoshuaExcelDocument>(name);
}