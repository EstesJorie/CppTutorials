#include <iostream>

#include "Rectangle.h"

int main()
{
	try
	{
		std::cout << "Width";
		int width;
		std::cin >> width;

		Rectangle rect;
		rect.setWidth(width);
	}
	catch (const std::invalid_argument& ex) //should never throw its own exception!
	{
		std::cout << ex.what()<< "\n";
	}
	
}