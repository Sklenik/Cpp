#include <iostream>

using namespace std;

int main()
{
    // More division

    int a = 5;
    int b = 2;

    string text = "I am text";

    int IntegerDivision = a/b;
    float floatingPointDivision = float(a)/float(b);

    // Some incrementing & decrementing
    int x = 1;
    int y = 0;

    cout << x << endl;
    cout << y << endl;

    cout << x++ << endl;
    cout << x << endl;
    cout << ++x << endl;
    cout << ++x << endl;

    cout << y-- << endl;
    cout << y << endl;
    cout << --y << endl;
    cout << --y << endl;

    // Some tinkering logical operators

    int i = 1;
    int j = 2;

    cout << (i == j) << endl;
    cout << (i == 1 && j == 2) << endl;
    cout << !(i != 1) << endl;
    cout << (j > i) << endl;
    cout << (((j % 2) == 0) || (i / 2 > 0)) << endl;
}