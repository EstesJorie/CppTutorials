#include <iostream>
using namespace std;

int main()
{
	// Heap or Free Store Memory (needs to be manually deallocated)
	int* numbers == new int[10];
	int* number = new int; //allocate memory for a single integer

	delete[] numbers; //delete (deallocate) array
	delete number; //delete (deallocate) single integer
	number = nullptr;
	numbers = nullptr;
}
