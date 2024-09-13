#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int inversedNumber = 0;
    int exponent = 0;

    while(n > 0) {

        cout << n % 2;
        inversedNumber = inversedNumber + pow(2, exponent) * !(n % 2);
        ++exponent;
        n = n / 2;

    }
    cout << endl;
    cout << inversedNumber << endl;

    return 0;
}