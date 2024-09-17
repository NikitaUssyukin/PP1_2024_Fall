#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n; // n can have any number of bits

    int exponent = 0;
    int decimal_inversed = 0;

    // calculating inversed 8-bit number
    while(exponent < 8) {
        decimal_inversed += !(n % 2) * pow(2, exponent);
        ++exponent;
        n /= 2;
    }

    cout << decimal_inversed << endl;

    return 0;
}