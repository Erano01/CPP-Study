#include <iostream>
#include <example1/AdobeAcrobatClient.h>

int main() {
    AdobeAcrobatClient adobeAcrobatClient;
    auto document = adobeAcrobatClient.newDocument();
    adobeAcrobatClient.openDocument(document);
    return 0;
}