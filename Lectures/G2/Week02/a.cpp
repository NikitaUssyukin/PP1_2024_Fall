#include <iostream>

using namespace std;

// increment and decrement
// ++ 
// --

int main() {

    int a = 2;
    int b = 3;

    // pre- and postincrement
    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    // pre- and posdecrement
    cout << --b << endl;
    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;

    return 0;
}