#include <iostream>
using namespace std;

int main()
{
	string name = "John Doe";	
	//name.find('o'); // returns 1

	if (name.find('O') == -1)
		cout << "Doesn't exist";

	name.rfind('o'); // returns 7
	name.find_first_of(",.:"); //returns underflow size_t value

	name.find_first_not_of(".,:");

}
 
