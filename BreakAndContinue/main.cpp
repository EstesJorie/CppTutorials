#include <iostream>
using namespace std;

int main() {
   while (true){
       cout << "Number ";
       int number;
       cin >> number;
       if (number >=1 && number <=5)
           break;
       cout << "Enter number between 1 and 5" << endl;
    }
    return 0;
}