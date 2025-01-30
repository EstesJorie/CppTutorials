#include <iostream>

using namespace std;
int main() {
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    if (isCitizen){
        if (!caResident) tuition = 1000;
    }
    else tuition = 3000;
    return 0;
}
