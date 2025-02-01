#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    cout << left;
    cout << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(10) << "C++" << right << setw(10) << 100 << endl
         << left << setw(10) << "JavaScript"<< right << setw(10) << 50 << endl;
}