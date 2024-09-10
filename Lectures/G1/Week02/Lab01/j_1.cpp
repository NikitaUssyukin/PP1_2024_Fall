#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c; 

    cin >> a >> b >> c;

    double semiP = (a + b + c) / 2;

    double area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
    
    printf("%.2f", area);

    return 0;
}