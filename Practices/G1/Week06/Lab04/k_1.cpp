#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n - i; ++j) { // outputs n - i dots
            cout << '.';
        }
        for(int j = 1; j <= 2 * i - 1; ++j) { // outputs 2 * i - 1 stars
            cout << '*';
        }
        for(int j = 1; j <= n - i; ++j) { // outputs n - i dots
            cout << '.';
        }
        cout << endl;
    }

    return 0;
}