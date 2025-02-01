#include <iostream>
using namespace std;

int main() {

  cout << "Enter two numbers: ";
  float val1;
  float val2;
  cin >> val1 >> val2;

  cout << "1 - Addition" << endl
       << "2 - Subtraction" << endl
       << "3 - Multiply" << endl
       << "4 - Division" << endl
       << "Select function: ";
  short calVal;
    cin >> calVal;

  switch (calVal) {
      case 1:
          cout << val1 + val2;
          break;
      case 2:
          cout << val1 - val2;
          break;
      case 3:
          cout << val1 * val2;
          break;
      case 4:
          cout << val1 / val2;
          break;
      default:
          cout << "Invalid number or function selected";
  }
    return 0;
}