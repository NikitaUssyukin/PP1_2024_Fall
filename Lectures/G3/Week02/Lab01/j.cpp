#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    double semiP = (a + b + c) / 2;

    double area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));

    printf("Area of the triangle is: %.2f\n", area);
    // %.2f substitutes the value from the area variable according to the ".2f" format specifier

    return 0;
}