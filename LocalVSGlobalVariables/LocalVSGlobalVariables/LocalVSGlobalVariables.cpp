#include <iostream>
using namespace std;

//global variable (global scope)
const double taxRate = .2;

double calcTax(int sales)
{
    return sales * taxRate;
}

int main()
{
    //local variable (local scope)
    int sales = 10'000;
    double tax = calcTax(sales);
    cout << tax;
    return 0;
}
