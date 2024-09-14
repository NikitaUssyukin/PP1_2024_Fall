#include <iostream>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    int sides = n * 2;

    if(n <= k) {
        cout << 2 << endl;
    } 
    else {
        cout << (sides / k) + (sides % k) / (k / 2) << endl;
    }

    return 0;
}