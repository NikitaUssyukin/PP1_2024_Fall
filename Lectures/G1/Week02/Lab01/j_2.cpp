#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c; 

    cin >> a >> b >> c;

    double semiP = (a + b + c) / 2;

    cout << setprecision(2) << fixed  << double(round(sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c)) * 100) / 100) << endl;
    
    return 0;
}