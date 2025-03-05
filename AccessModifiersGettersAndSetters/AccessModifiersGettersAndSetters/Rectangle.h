#pragma once

class Rectangle
{
public:
	void draw();
	int getArea();

	int getWidth(); //Getter (accessor)
	void setWidth(int width); //Setter (mutator)

	int getHeight();
	void setHeight(int height);

private:
	int width;
	int height;
};
