#include <iostream>

using namespace std;

int main() {
    char a;

    a = 'A';

    // char takes characters (symbols):
    // A, a, 1, !, % #, etc

    // Symbols are encoded using ASCII code
    cout << a << " " << int(a) << endl;
    // int(a) - explicit type casting

    int b = a; // implicit type casting

    cout << a << " " << b << endl;

    return 0;
}