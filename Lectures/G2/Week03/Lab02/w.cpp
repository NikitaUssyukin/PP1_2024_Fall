#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int index = 0;

    while(n > 0) {
        if(n % 2 == 1) {
            cout << index << endl;
            break;
        }
        n /= 2; // n = n / 2
        ++index;
    }

    return 0;
}