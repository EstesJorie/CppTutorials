#include "TextBox.h"

#include <iostream>
#include<string>

std::string TextBox::getValue()
{
	return value;
}


void TextBox::setValue(const std::string& value)
{
	this->value = value;
}
