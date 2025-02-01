#include <iostream>
using namespace std;
int main() {
    int temps[] = {60, 80, 90};
    double sum = 0;

    for (int temp: temps)
        sum += temp;
    short count = sizeof(temps) / sizeof(int);
    double avg = sum / count;
    cout << avg;
    return 0;
}