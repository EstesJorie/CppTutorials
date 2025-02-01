#include <iostream>
using namespace std;
int main() {
    cout << "1 - Create account" << endl
         << "2 - Change password" << endl
         << "3 - Quit" << endl
         << "Please select an option: ";

    short input;
    cin >> input;

    switch (input) {
        case 1:
            cout<< "1 selected";
            break;
        case 2:
            cout << "2 selected";
            break;
        default:
            cout << "Goodbye";
    }
    return 0;
}
