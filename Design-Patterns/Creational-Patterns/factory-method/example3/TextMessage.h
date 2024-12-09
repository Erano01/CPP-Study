#pragma once
#include "Message.h"

class TextMessage : public Message {
public:
    std::string getContent() const override{
        return "This is a plain text message.";
    }
    ~TextMessage() override = default;
};