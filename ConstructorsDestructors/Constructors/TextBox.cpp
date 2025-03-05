#include "TextBox.h"

#include <iostream>
#include<string>

TextBox::TextBox(const std::string& value) : value{value}
{
}

std::string TextBox::getValue()
{
	return value;
}


void TextBox::setValue(const std::string& value)
{
	this->value = value;
}
