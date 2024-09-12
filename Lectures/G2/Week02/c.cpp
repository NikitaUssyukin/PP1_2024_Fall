#include <iostream>

using namespace std;

// bitwise operators: & - AND, | - OR, ^ - XOR, ~ - NOT, << - shift left, >> - shift right

// 11 & 7
// 1011 & 0111 = 0011 (5 in decimal)

// 8 >> 1 = 4
// 1000 >> 1 = 0100 

// 8 << 1 = 16
// 1000 << 1 = 10000

// ~8 = 7
// ~1000 = 0111

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