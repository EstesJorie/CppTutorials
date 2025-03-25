#pragma once

#include <string>

class Rectangle
{
public:
	Rectangle() = default; //default constructor
	Rectangle(const Rectangle& source); //copy constructor

	Rectangle(int width, int height);
	Rectangle(int width, int height, const std::string& color);

	~Rectangle(); //destructor

	void draw() const;
	int getArea() const;

	int getWidth() const;
	void setWidth(int width);

	int getHeight() const;
	void setHeight(int height);

	static int getObjectCount();

private:
	int width;
	int height;
	std::string color;

	static int objectsCount;

};
