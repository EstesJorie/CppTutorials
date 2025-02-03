#include <iostream>
using namespace std;

const int rows = 2;
const int cols = 3;

void printMatrix(int matrix[rows][cols]){
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++)
            cout << matrix[row][col] << endl;
    }
}

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], int size) {
    for (int pass =0; pass < size - 1; pass++) {
        for (int i = 1; i < size; i++) {
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i - 1);
        }
    }
}

int main() {

    int matrix[rows][cols] ={{11, 12, 13},{21, 22, 23}};

    int numbers[] = {30, 20, 10};
    sort(numbers, size(numbers));
    for (int number: numbers){
        cout << number << endl;
    }

    printMatrix(matrix);

    return 0;
}