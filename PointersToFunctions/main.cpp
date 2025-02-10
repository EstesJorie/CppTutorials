#include <iostream>
using namespace std;

void increasePrice(double* price) {
    *price *= 1.2;
}

//EXERCISE: Swap method
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    double price = 100;
    increasePrice(&price);
    cout << price << endl;

    return 0;
}
