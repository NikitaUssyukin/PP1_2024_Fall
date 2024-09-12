#include <iostream>

using namespace std;

// increment and decrement
// ++ and --

int main() {
    int a = 2;
    int b = 3;

    // preincrement
    cout << ++a << endl; // same as a = a + 1 or a += 1
    cout << a << endl;

    // postincrement
    cout << a++ << endl;
    cout << a << endl;

    // predecrement
    cout << --b << endl; // same as b = b - 1 or b -= 1
    cout << b << endl;

    // postdecrement
    cout << b-- + b << endl;
    cout << b << endl;

    a = 2;

    cout << a++ + --a << endl;

    return 0;
}