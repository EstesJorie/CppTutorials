#pragma once

#include <string>

#include "Widget.h"
class TextBox : public Widget
{
public:
	void draw() const override final;
	~TextBox() override;
	std::string getValue();
	void setValue(const std::string& value);


private:
	std::string value;
};