#pragma once

#include <string>

#include "Widget.h"
class TextBox : public Widget
{
public:
	TextBox() = default;
	explicit TextBox(const std::string& value);
	std::string getValue();
	void setValue(const std::string& value);


private:
	std::string value;
};