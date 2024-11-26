#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int *b = &a;

    cout << a << endl;

    *b = 10;

    cout << a << endl;

    return 0;
}