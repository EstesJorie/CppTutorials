
#include <iostream>
using namespace std;

int main()
{
	string name = "John";
	name.append(" Smith");
	name.insert(0, "I am ");
	//name.erase(0, 5);
	//name.clear();
	//name.replace(0, 4, "I am");

	cout << name;
}


