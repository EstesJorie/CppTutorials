#include <iostream>

int main() {
    std::cout << 'Hello World';
    return 0;
}

int swap() {
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a;

    return 0;
}

int constantExample () {
    const double pi = 3.14;
    return 0;
}

int addExample() {
    int x = 10;
    int y = 3;
    int z = x + y;
    std::cout << z;
    return 0;
}

int divExample() {
    double x = 10;
    int y = 6;
    double z = x / y;
    std::cout << z;
    return 0;
}

int modifyVar() {
    int x = 10;
    x = x + 5;
    std::cout << x;
    return 0;
}

int endofLine() {
    int x = 10;
    std::cout << "Value = " << x << std::endl;
    return 0;
}