#include <iostream>

#include "Length.h"
#include "Point.h"

using namespace std;

int main()
{
	Length first{ 10 };
	Length second{ 20 };

	/*first.operator==(second);

	if (first == 10);*/

	if (first < second) //overload generates all potential equality
		cout << "First is smaller\n";

	Point firstP{ 10, 20 };
	Point secondP{ 10, 20 };

	cout << (firstP == secondP) << "\n";
	cout << firstP << "\n";

	int x = 10;
	int y = 20;

	auto result = x <=> y; //spaceship operator

	if (result == strong_ordering::less)
	{
	}
	else if (result == strong_ordering::greater)
	{
	}
	else{}
}