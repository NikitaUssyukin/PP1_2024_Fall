#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    cin >> n;

    int result = 0;
    int exponent = 0;

    while(n > 0) {
        cout << n % 2; // outputs bits in reverse order
        result += !(n % 2) * pow(2, exponent++);
        n /= 2; // n = n / 2
    }

    cout << "\n" << result << endl;

    return 0;
}