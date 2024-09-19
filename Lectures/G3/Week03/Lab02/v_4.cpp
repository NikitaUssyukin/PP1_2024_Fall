#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    cin >> n;

    cout << ~n & 511 << endl; // inverting and using a mask of 9 bits

    return 0;
}