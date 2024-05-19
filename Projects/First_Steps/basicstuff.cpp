#include <iostream>

// TODO find out why I cant declare strings, do the functions need to be declared before main ?
void printNum(int inputNumber, int msgType = 0) {
    switch (msgType)
    {
    case 0:
        std::cout << "The number is: ";
        std::cout << inputNumber << std::endl;
        break;

    case 1:
        std::cout << "The number is something else" << std::endl;
        break;
    
    default:
        std::cout << "Wrong msgType parameter" << std::endl;
        break;
    }
}

int main()
{
    // Trying out the basic stuff

    int a = 4, b = 2;

    int sum = a + b;
    int diff  = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printNum(sum);
    printNum(diff);
    printNum(product);
    printNum(quotient);
    printNum(remainder);

    if (a == 1) {
        printNum(a);
    }
    else
    {
        printNum(a, 1);
    }

    printNum(a);

    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;

    std::cout << (a > b) << std::endl;
    std::cout << (a <= b) << std::endl;
    
    std::cout << !(a <= b) << std::endl;

    std::cout << !(!(a <= b) && (a == b)) << std::endl;

    std::cout << (!(a <= b) || (a == b)) << std::endl;

    return 0;
}
