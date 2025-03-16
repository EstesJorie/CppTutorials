#include "TextBox.h"

#include <iostream>
#include<string>


void TextBox::draw() const
{
	std::cout << "Drawing a Textbox\n";
}

TextBox::~TextBox()
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
