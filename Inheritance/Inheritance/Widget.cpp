#include <iostream>
#include "Widget.h"

void Widget::enable()
{
	enabled = true;
}
void Widget::disable()
{
	enabled = false;
}

bool Widget::isEnabled() const
{
	return enabled;
}

Widget::Widget()
{
}

Widget::~Widget()
{
}

Widget::Widget(bool enabled) : enabled{ enabled } //default constructor
{
	std::cout << "Widget constructed!\n";
}

