#include <iostream>
#include <fstream>
#include <memory>

#include "Rectangle.h"
#include "Person.h"
#include "SmartPointer.h"

using namespace std;

void showPerson(Person person)
{
	
}

void showRectangle(Rectangle& rectangle)
{
	
}

int main()
{
	Person person{ 20 };
	showPerson(person);

	Rectangle rectangle{ 10, 20, "Blue" };
	showRectangle(rectangle);
	//cout << rectangle.getWidth();

	/*auto rect* =new Rectangle(10, 20);
	rect->draw();
	delete rect;
	rect = nullptr;*/

	auto rect = make_unique<Rectangle>(10, 20);

	SmartPointer ptr{ new int };

	Rectangle rectangles[] = {
		Rectangle(),
		Rectangle(10, 20),
		Rectangle(10, 20, "Blue")
	};

	for (Rectangle& rect : rectangles)
		rect.draw();


	cout << Rectangle::getObjectCount() << endl;

}