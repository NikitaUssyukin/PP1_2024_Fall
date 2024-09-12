#include <iostream>

using namespace std;

// bitwise operators
// OR          -   |
// AND         -   &
// NOT         -   !
// XOR         -   ^
// shift left  -   <<
// shift right -   >>

// 1 & 2 = 0
// 0001 & 0010 = 0000

// 3 & 2 = 2
// 0011 & 0010 = 0010

// ~2 = 13
// ~0010 = 1101

// 2 << 1 = 4 
// 0010 << 1 = 0100 

// 3 << 2 = 12 
// 0011 << 2 = 1100

// 2 >> 1 = 11 
// 0010 >> 2 = 0001

// 3 >> 2 = 12 
// 0011 >> 2 = 0000

int main() {
    int a, b;

    cin >> a >> b;

    cout << "a & b: " << (a & b) << endl;

    cout << "a | b: " << (a | b) << endl;

    cout << "a ^ b: " << (a ^ b) << endl;

    cout << "~a: " << ~a << endl;

    cout << "a << b: " << (a << b) << endl;

    cout << "a >> b: " << (a >> b) << endl;

    return 0;
}