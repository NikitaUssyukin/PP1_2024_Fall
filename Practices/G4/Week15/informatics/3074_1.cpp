#include <iostream>

using namespace std;

int main() {

    int a = 0;
    int b = 1;
    int c;

    int n;
    cin >> n;

    if(n < 2) {
        cout << n << endl;
        return 0;
    }

    while(n > 1) {
        c = a + b;
        a = b;
        b = c;

        --n;
    }

    cout << c << endl;

    return 0;
}