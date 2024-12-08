#include "AdobeAcrobatClient.h"

std::unique_ptr<Document> AdobeAcrobatClient::createDocument() {
    return std::make_unique<PDFDocument>();
}
