#include <iostream>

using namespace std;

void multiplyAby2(int &a) { // & means is passed by reference
    a *= 2;
    cout << a << endl;
}

int main() {

    int x;
    cin >> x;

    int &y = x;

    multiplyAby2(x);

    cout << x << ' ' << y << endl;

    return 0;
}