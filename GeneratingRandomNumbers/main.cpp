#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    const short minVal = 1;
    const short maxVal = 6;

    short die1 = (rand() % (maxVal - minVal + 1)) + minVal;
    short die2 = (rand() % (maxVal - minVal + 1)) + minVal;

    cout << die1 << '\n' << die2 << endl;
}
