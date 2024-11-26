#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int *b;
    int c = 10;

    b = &a;

    *b = 10;

    cout << a << endl;

    b = &c;

    *b = 20;

    cout << c << endl;

    return 0;
}