# include <iostream>

using namespace std;

double calcTax(double income, double taxRate = .2)
{
	return income * taxRate;
}

int main()
{
	double tax = calcTax(10'000, .3);
	cout << tax;
	return 0;
}