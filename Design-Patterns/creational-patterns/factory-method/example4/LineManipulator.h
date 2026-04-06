#pragma once
#include "Manipulator.h"
#include <string>

//concrete product
class LineManipulator : public Manipulator {
private:
	int lineWidth;
	std::string lineColor;
public:
	LineManipulator() : lineWidth(1), lineColor("black") {}
	LineManipulator(int width, const std::string& color);
	
	void downClick() override;
	void drag() override;
	void upClick() override;

	int getLineWidth() const;
	std::string getLineColor() const;
	void setLineWidth(int width);
	void setLineColor(const std::string& color);
};