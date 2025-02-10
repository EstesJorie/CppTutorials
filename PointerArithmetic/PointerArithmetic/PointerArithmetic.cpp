// PointerArithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
	int numbers[] = { 10, 20, 30 };
	int* ptr = numbers;
	cout << *(ptr + 1); //Returns next element (20)
	ptr++;
	cout << *ptr;

}

