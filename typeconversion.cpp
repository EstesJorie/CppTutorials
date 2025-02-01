#include <iostream>

using namespace std;

int main(){
    int x = 1;
    double y = 2.2;
    //double z = x + y; // int + double
    int z = x + static_cast <int>(y); //trying to store double in int (data loss)
    cout << z;
    return 0;
}