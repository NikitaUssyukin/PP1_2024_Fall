#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    while(a > 0) {
        cout << a % 2;
        a /= 2; // same as a = a / 2
    }
    cout << endl;

    return 0;
}