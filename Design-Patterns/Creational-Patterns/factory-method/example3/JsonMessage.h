#pragma once // Include guard
#include "Message.h"

class JsonMessage : public Message {
public:
    std::string getContent() const override {
        return R"({"message": "This is a JSON message"})";
    };
    ~JsonMessage() override = default;
};