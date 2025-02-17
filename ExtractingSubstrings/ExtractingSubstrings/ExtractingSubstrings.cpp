
#include <iostream>
using namespace std;

int main()
{
	string name = "Joe Tresise";
	size_t index = name.rfind(' '); //find the first white space	
	string firstName = name.substr(0,index);
	string lastName = name.substr(index + 1); //start after white space
}

