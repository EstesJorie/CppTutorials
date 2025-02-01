#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess = 0;
    while (guess != secret) {
        cout << "Guess: ";
        cin >> guess;
        if (guess != secret)
            cout << "Not my secret number!" << endl;
        else
            cout << "You got it!";
    }
}
