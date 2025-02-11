// SharedPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	shared_ptr<int> x(new int);
	auto z = make_shared<int>();
	*x = 10;
	shared_ptr<int> y(x);
	if (x == y)
		cout << "Equal!" << endl;
	else
		cout << "Not Equal!" << endl;
	cout << *y;
}

