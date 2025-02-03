#include <iostream>
using namespace std;

// int[] -> int* (pointer)
void printNumbers(int numbers[], int size){
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

int find(int numbers[], size_t size, int target) {
    for (int i =0; i < size; i++)
        if (numbers[i] == target)
            return i;
    return -1;
}

int main() {
    int numbers[] = {10, 20, 30};
    int first[] = {10, 20, 30};
    int second[size(first)];
    int values[3] = {10, 20, 30};

    //unpacking array
    auto [x, y, z] = values;

    for (int i = 0; i < size(first); i++) {
        second[i] = first[i];
    }
    bool areEqual = true;
    for (int i = 0; i < size(first); i++) {
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }
    }

    cout << boolalpha << areEqual << endl;
    printNumbers(numbers, size(numbers));

    // size_t = unsigned long long (64bit complier) else unsigned int (32bit)
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    //cout << sizeof(size_t) << endl;

    return 0;
}
