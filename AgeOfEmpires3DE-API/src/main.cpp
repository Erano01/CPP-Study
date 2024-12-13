
#include <iostream>
#include <memory>
#include <string>
#include "Unit.h"

int main() {
	auto unit = std::unique_ptr<Unit>();
	std::cout << unit->test() << std::endl;
}