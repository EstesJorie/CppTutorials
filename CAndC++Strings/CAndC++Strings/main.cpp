#include <iostream>
#include <string>
using namespace std;

int main() {

	//C-Style Strings
	/* 
	//Last character is null terminator (\0)
	char name[50] = "Matt";
	char lastName[] = "Clarke";

	cout << strlen(name) << endl;
	// strcat(name, lastName);
	// strcpy(name, lastName);

	if (strcmp(name, lastName) == 0)
		cout << "Equal";
	else
		cout << "Not equal";
	cout << name; */

	// C++ Strings
	string name = "Matt";
	string another = name;

	if (another==name)
		cout << "Equal" << endl;
	else
		cout << "Not equal" << endl;

	name[0] = 'm';
	cout << name.length();

	//cout << name.starts_with("M");
	//cout << name.ends_with("t");
	cout << name.front();

	return 0;
}