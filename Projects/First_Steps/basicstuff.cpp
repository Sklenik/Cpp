#include <iostream>

// TODO find out why I cant declare strings, do the functions need to be declared before main ?
void printNum(int inputNumber, int msgType) {
    switch (msgType)
    {
    case 1:
        std::cout << "The number is: ";
        std::cout << inputNumber << std::endl;
        break;

    case 2:
        std::cout << "The number is something else" << std::endl;
        break;
    
    default:
        std::cout << "You forgot to define the msgType parameter" << std::endl;
        break;
    }
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
        printNum(a, 1);
    }
    else
    {
        printNum(a, 2);
    }

    return 0;
}
