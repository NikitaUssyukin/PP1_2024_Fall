#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int reversedNumber = 0;
    int exponent = 1;
    int amountOfBits = 8;

    while(n > 0) {

        cout << n % 2;
        reversedNumber = reversedNumber + pow(2, amountOfBits - exponent) * (n % 2);
        ++exponent;
        n = n / 2;

    }
    cout << endl;
    cout << reversedNumber << endl;

    return 0;
}