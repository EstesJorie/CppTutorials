#include <iostream>

#include "TextBox.h"

using namespace std;

int main()
{
	TextBox box;
	box.disable();
	cout << box.isEnabled();

}