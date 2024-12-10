#pragma once
#include "Manipulator.h"
#include <string>

//concrete product
class TextManipulator : public Manipulator {
private:
	int textWidth;
	std::string textColor;
public:
	TextManipulator() : textWidth(5), textColor("black") {}
	TextManipulator(int width, const std::string& color);

	void downClick() override;
	void drag() override;
	void upClick() override;

	int getTextWidth() const;
	std::string getTextColor() const;
	void setTextWidth(int width);
	void setTextColor(const std::string& color);
};