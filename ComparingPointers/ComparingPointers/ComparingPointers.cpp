#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	int numbers[] = { 10, 20, 30 };
	int* ptrNum = &numbers[size(numbers) - 1];

	while (ptrNum >= numbers)
	{
		cout << *ptrNum << endl;
		ptrNum--;
	}

	int* ptrX = &x;
	int* ptrY = &x;

	if (ptrX != nullptr)
		cout << *ptrX;

}

