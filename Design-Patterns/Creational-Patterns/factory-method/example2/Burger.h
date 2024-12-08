#pragma once
#include <string>

// Product interface
class Burger {
public:
	virtual ~Burger() = default;

	virtual int getProductId() const = 0;
	virtual std::string getAddOns() const = 0;
	virtual void prepare() const = 0;
};