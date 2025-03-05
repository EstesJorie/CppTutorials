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

int Rectangle::getWidth() 
{
	return width;
}

int Rectangle::getHeight()  
{
	return height;
}

void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw std::invalid_argument("width");

	/* m_width = width; */
	this->width = width;
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw std::invalid_argument("height");

	this->height = height;
}