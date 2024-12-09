#pragma once //include guard
#include <string>
#include <iostream>

//Abstract product
class Message {
public:
	// Virtual destructor to ensure proper cleanup for derived classes
	virtual ~Message() = default;

	//Pure virtual method: Assigning = 0 makes this method abstract and forces derived classes to implement it.
	virtual std::string getContent() const = 0;
	
	// Inline implementation of basic, common logic is acceptable for parent functions.
	void addDefaultHeaders() {
		// Common logic for adding default headers
		std::cout << "Default headers added.\n";
	}
	void encrypt() {
		// Common logic for encryption
		std::cout << "Message encrypted.\n";
	}
};