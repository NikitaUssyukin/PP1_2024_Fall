#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    while(n > 0) {
        cout << n % 2;
        n /= 2; // n = n / 2
    }

    cout << endl;

    return 0;
}