#include <iostream>
using namespace std;

int main()
{
    int number = 10;

	// the address-of operator
    int* ptr = &number;

	// indirection/de-referncing operator
	*ptr = 20; //sets number to 2

	return 0;
}


