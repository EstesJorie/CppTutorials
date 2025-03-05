#pragma once

class Rectangle
{
public:
	Rectangle(int width, int height);

	void draw();
	int getArea();

	int getWidth(); 
	void setWidth(int width); 

	int getHeight();
	void setHeight(int height);

private:
	int width;
	int height;
};
