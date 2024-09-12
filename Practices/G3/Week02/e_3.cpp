#include <iostream>
#include <cmath>

// numeric systems

/*
binary

converting decimal to binary
*/

using namespace std;

int main() {

    int a;
    cin >> a;

    int b = 0;
    int exp = 0;

    while(a > 0) {
        b += (a % 2) * pow(2, exp);
        ++exp;
        a /= 2;
        
    }
    
    cout << b << endl;

    return 0;
}