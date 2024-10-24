#include <iostream>

using namespace std;

void multiplyAby2(int a) {
    a *= 2;
    cout << a << endl;
}

int main() {

    int a;
    cin >> a;

    multiplyAby2(a);

    cout << a << endl;

    return 0;
}