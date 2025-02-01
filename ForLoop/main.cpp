#include <iostream>
using namespace std;
int main() {
    cout << "Enter positive number: ";
    float number;
    cin >> number;

    if (number < 0)
    cout << "Number is not positive.";

    else {
        int fact = 1;
        for (int i = 1; i<= number; i++)
            fact *= i;
        cout << "Factorial of " << number << ": " << fact << endl;
    }

    return 0;
}