#include <iostream>

using namespace std;

int main() {
    int sales = 11'000;
    double commission = (sales > 10'000) ? .1 : .05;
    cout << commission << endl;
    return 0;
}