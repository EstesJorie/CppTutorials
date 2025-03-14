#pragma once
#include <string>

class Shape
{
public:
	std::string getBackground();

	void setBackground();
private:
	std::string background;
};
