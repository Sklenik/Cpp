#include <iostream>

// TODO find out why I cant declare strings, do the functions need to be declared before main ?
void printNum(int inputNumber) {
    std::cout << "The number is: ";
    std::cout << inputNumber << std::endl;
}

int main()
{
    // Trying out the basic stuff

    int a, b;

    a = 2;
    // b = 2;
    
    int sum = a + b;
    int diff  = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    if (a == 1) {
        printNum(a);
    }
    else
    {
        printNum(a);
    }

    return 0;
}
