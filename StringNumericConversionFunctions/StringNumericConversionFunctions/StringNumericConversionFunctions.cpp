
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string price = "19.99";
    float priceF = stof(price);
	cout << "Price: " << priceF << endl;

    string num = to_string(19);
	cout << num << endl;
}

