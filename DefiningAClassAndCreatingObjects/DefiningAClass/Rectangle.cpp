#include "Rectangle.h"

#include <iostream>

void Rectangle::draw()
{
	std::cout << "Drawing a rectangle" << std::endl;
	std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea()
{
	return width * height;
}