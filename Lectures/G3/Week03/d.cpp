#include <iostream>

using namespace std;

int main() {

    int a = 1;

    cout << "value of a before operations: " << a << endl;
    cout << "++a: " << ++a << endl;
    cout << "a: " << a << endl;

    cout << "value of a before operations: " << a << endl;
    cout << "++a: " << a++ << endl;
    cout << "a: " << a << endl;

    cout << "value of a before operations: " << a << endl;
    cout << "a++ + ++a: " << a++ + ++a << endl;
    cout << "a: " << a << endl;

    return 0;
}