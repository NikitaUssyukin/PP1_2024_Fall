/*
183
in binary: 10110111

bin to dec:
10110111 = 1 * 2^7 + 0 * 2^6 + 1 * 2^5 + 1 * 2^4 + 0 * 2^3 + 1 * 2^2 + 1 * 2^1 + 1 * 2^0  = 183
         =   128   +    0    +   32    +    16   +    0    +    4    +    2    +    1     = 183

dec to bin:
183 % 2 = 1 - LSB, Least Significant Bit
183 / 2 = 91

91 % 2 = 1
91 / 2 = 45

45 % 2 = 1
45 / 2 = 22

22 % 2 = 0
22 / 2 = 11

11 % 2 = 1
11 / 2 = 5

5 % 2 = 1
5 / 2 = 2

2 % 2 = 0
2 / 2 = 1

1 % 2 = 1 - MSB, Most Significant Bit
1 / 2 = 0

result: 10110111

Formula for the largest decimal number that n bits can represent:

2^n - 1

For n = 4:

2^4 - 1 = 16 - 1 = 15
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n; // n can have any number of bits

    // outputting bits in reverse
    while(n > 0) {
        cout << n % 2;
        n /= 2;
    }

    return 0;
}