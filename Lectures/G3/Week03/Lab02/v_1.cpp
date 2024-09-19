#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    cin >> n;

    int exponent = 0;
    int flippedBits = 0;

    while(exponent < 9) {
        flippedBits += !(n % 2) * pow(2, exponent);
        ++exponent;
        n /= 2;
    }

    cout << flippedBits << endl;

    return 0;
}