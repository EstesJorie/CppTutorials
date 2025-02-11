
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<int> x(new int);
	auto y = make_unique<int>();
	auto numbers = make_unique<int[]>(10); //array of 10 integers
	*x = 10; //de-referenced

	numbers[0] = 10;
	cout << numbers[0];
}
