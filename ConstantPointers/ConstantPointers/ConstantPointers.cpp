#include <iostream>
using namespace std;
int main()
{
	const int x = 10;
	const int* ptr = &x;

	//*ptr = 20; //cannot modify a constant value

	int y = 20;
	int* const pointer = &y;

	int z = 15;
	const int* const cPointer = &z;

}

