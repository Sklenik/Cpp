#include <iostream>

using namespace std;

int main()
{

    for (int i = 10; i > 0; i-- ) {
        cout << i << endl;

        if (i == 1) {
            cout << "Blastoff !!!" << endl;
        }
    }

    cout << endl;

    int x = 0;
    while (x < 3) {
        cout << ++x << endl;
        //x++;
    }

    cout << endl;

    int n = 5;
    do {
        cout << n << endl;
        n--;
    } while (n != 0);

    return 0;
}
