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
        ++index;
        n /= 2;
    }

    return 0;
}