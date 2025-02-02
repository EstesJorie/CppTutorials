#include <iostream>

//function declaration/prototype
void greet(string name);

int main()
{
    greet("Mosh");
}

// function declaration
void greet(string name) {
    std::cout << "Hello " << name;
}