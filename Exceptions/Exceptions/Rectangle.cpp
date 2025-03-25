#include "Rectangle.h"

#include <iostream>

void Rectangle::draw() const
{
	std::cout << "Drawing a rectangle" << std::endl;
	std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea() const
{
	return width * height;
}

int Rectangle::getWidth() const
{
	return width;
}

int Rectangle::getHeight()  const
{
	return height;
}

void Rectangle::setWidth(int width) 
{
	if (width < 0)
		throw std::invalid_argument("Width cannot be negative");
	/* m_width = width; */
	this->width = width;
	if(width>100)
		throw std::out_of_range("Width cannot be greater than 100")
}

void Rectangle::setHeight(int height)
{
	if (height < 0)
		throw std::invalid_argument("height");

	this->height = height;
}



/*Rectangle::Rectangle() //Default Constructor
{
	
}*/



Rectangle::Rectangle(int width, int height)
{
	objectsCount++; //increment static member by one
	std::cout << "Constructing a Rectangle \n";
	setWidth(width);
	setHeight(height);
}

Rectangle::Rectangle(int width, int height, const std::string& color) : Rectangle(width, height)
{
	std::cout << "Constructing Rectangle with Color \n";
	this->color = color;
}

Rectangle::Rectangle(const Rectangle& source) //copy constructor
{
	std::cout << "Rectangle copied \n";
	this->width = source.width;
	this->height = source.height;
	this->color = source.color;
}

Rectangle::~Rectangle() //destructor
{
	std::cout << "Destructor called \n";
}

int Rectangle::getObjectCount()
{
	return objectsCount;
}

int Rectangle::objectsCount = 0; //static member variable