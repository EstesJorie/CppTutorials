#include <iostream>
using namespace std;

void greet(string name)
{
	cout << "Hello " << name;
}

// SIG = name + (number and type of parameters)
void greet (string title, string name)
{
	cout << "Hello" << title << " " << title << endl;
}

int main()
{
	greet("Mr ","Joe");
	return 0;
}


