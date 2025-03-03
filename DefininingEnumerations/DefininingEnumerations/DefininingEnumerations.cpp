#include <iostream>

using namespace std;

enum class Action
{
	list = 1,
	add, //complier takes value from first item and then increments onwards (add =2, etc.)
	update
};

int main()
{
	cout <<
		"1: List Invoices" << endl <<
		"2: Add Invoice" << endl <<
		"3: Updates Invoice" << endl <<
		"Select: ";

	int input;
	cin >> input;

	if (input == static_cast<int>(Action::list))
	{
		cout << "List Invoices";
	}
}
