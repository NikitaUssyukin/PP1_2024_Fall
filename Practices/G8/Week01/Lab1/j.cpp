#include <iostream>
#include <cmath> // for using sqrt()
#include <iomanip>

using namespace std;

int main() {

    double a, b, c;

    cin >> a >> b >> c;

    double s = (a + b + c) / 2; // semiperimeter

    cout << setprecision(10) << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;

    return 0;
}