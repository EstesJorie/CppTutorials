#include <iostream>

using namespace std;

int main(){
    int temp = 70;
    if (temp < 60) {
        cout << 'Cold' << endl;
    }
    else if (temp < 90) {
        cout << 'Warm' << endl;
    }
    else
        cout << 'Hot' << endl;
    cout << 'Done';

    return 0;
}