#pragma once

#include <string>
class TextBox
{
public:
	TextBox() = default;
	explicit TextBox(const std::string& value);
	std::string getValue();
	void setValue(const std::string& value);


private:
	std::string value;
};