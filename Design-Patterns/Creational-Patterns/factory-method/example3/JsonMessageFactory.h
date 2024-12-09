#pragma once
#include "MessageFactory.h"
#include "JsonMessage.h"
#include <memory>

class JsonMessageFactory : public MessageFactory {
protected:
    std::unique_ptr<Message> createMessage() override {
        return std::make_unique<JsonMessage>();
    }
};