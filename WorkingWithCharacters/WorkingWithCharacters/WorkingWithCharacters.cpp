
#include <iostream>
using namespace std;

bool isValid(string custNumber)
{
	if (custNumber.length() !=6)
	{
		return false;
	}
	for (int i = 0; i < 2; i++)
	{
		if (!isalpha(custNumber[i]))
			return false;
	}
	for (int i = 2; i < custNumber.length(); i++)
	{
		if (!isdigit(custNumber[i]))
			return false;
	}

	return true;
}

int main()
{
	string name = "Joe Tresise";
	//cout << islower(name[0]);
	//cout << (char) toupper('a');

	/*char input;
	if (tolower(input) == 'x')
	{
		cout << "You entered an x\n";
	}
	else
	{
		cout << "You did not enter an x\n";
	}*/

	string custNumber = "AB1234";
	cout << isValid(custNumber);
	
	return 0;
}

