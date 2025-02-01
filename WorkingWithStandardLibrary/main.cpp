#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.141592653589793;
    double area = pi * pow(radius, 2);
    cout << area << endl;4
    return 0;
}