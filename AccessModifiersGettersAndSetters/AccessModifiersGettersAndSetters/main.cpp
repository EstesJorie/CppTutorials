#include <iostream>
#include <fstream>
#include <sstream>

#include "TextBox.h"

using namespace std;

int main()
{
	TextBox tBox;
	tBox.setValue("Hello World");
	cout << tBox.getValue();
}