#pragma once
#include "MessageFactory.h"
#include "TextMessage.h"
#include <memory>

class TextMessageFactory : public MessageFactory {
protected:
    std::unique_ptr<Message> createMessage() override{
        return std::make_unique<TextMessage>();
    }
};