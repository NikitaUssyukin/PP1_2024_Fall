#include <iostream>

using namespace std;

void print(int a) {
    a *= 2;
    cout << a << endl;
}

int main() {

    int x;
    cin >> x;

    print(x);

    cout << x << endl;

    return 0;
}