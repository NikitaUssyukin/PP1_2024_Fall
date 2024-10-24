#include <iostream>

using namespace std;

void doubleTheNumber(int &a) {
    a *= 2;
    cout << a << endl;
}

int main() {

    int a;
    cin >> a;

    doubleTheNumber(a);

    cout << a << endl;

    return 0;
}