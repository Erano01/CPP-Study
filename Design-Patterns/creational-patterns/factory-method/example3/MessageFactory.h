#pragma once
#include "Message.h"
#include <memory>

class MessageFactory {
protected:
	//pure virtual func
	virtual std::unique_ptr<Message> createMessage() = 0;
public:
	virtual ~MessageFactory() = default;

	std::unique_ptr<Message> getMessage() {
		auto msg = createMessage();
		msg -> addDefaultHeaders();
		msg -> encrypt();
		return msg;
	}
};