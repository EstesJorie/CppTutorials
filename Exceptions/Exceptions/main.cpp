#include <iostream>

#include "Rectangle.h"
#include "AccountLocked.h"

void login()
{
	throw AccountLocked{};
}

void createRectangle()
{
	//Open a file
	try
	{
		Rectangle rect;
		rect.setWidth(-1);
	}
	catch (const std::invalid_argument& ex)
	{
		std::cout << "Close the file\n";
	}
}

void doWork()
{
	createRectangle();
}


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
	//catch (const std::invalid_argument& ex) //should never throw its own exception!
	//{
	//	std::cout << ex.what()<< "\n";
	//}
	//catch (const std::out_of_range& ex)
	//{
	//	std::cout << ex.what() << "\n";
	//}
	catch (const std::out_of_range& ex)
	{
		std::cout << ex.what();
	}

	catch (const std::logic_error& ex) //consolidating above two catch blocks
	{
		std::cout << ex.what();
	}

	try
	{
		doWork();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what();
	}

	try
	{
		login();
	}
	catch (const std::exception& ex) //use of custom exception
	{
		std::cout << ex.what();
	}
}