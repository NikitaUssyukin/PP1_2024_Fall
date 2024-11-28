#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int b = 10;
    int *c;

    c = &a;
    cout << a << endl;

    *c = 20;
    cout << a << endl;

    c = &b;
    cout << b << endl;

    *c = 40;
    cout << b << endl;

    return 0;
}