#include <iostream>

using namespace std;

int doubleTheNumber(int a) {
    a *= 2;
    cout << a << endl;
    return a;
}

int main() {

    int a;
    cin >> a;

    a = doubleTheNumber(a);

    cout << a << endl;

    return 0;
}