#pragma once

#include <string>
class TextBox
{
public:
	std::string getValue();
	void setValue(const std::string& value);


private:
	std::string value;
};