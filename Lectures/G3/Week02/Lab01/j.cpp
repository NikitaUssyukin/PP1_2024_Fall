/*
5 5

1st day: 5    5
2nd day: 20   5 * 2 * 2
3rd day: 30   5 * 2 * 3
4th day: 40   5 * 2 * 4
5th day: 50   5 * 2 * 5

a = 2
d = 1
n = 4 (d_days - 1)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    double semiP = (a + b + c) / 2;

    double area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));

    printf("%.2f\n", area);
    // %.2f substitutes the value from the area variable according to the ".2f" format specifier

    return 0;
}