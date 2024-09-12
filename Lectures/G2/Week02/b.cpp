#include <iostream>

using namespace std;

// boolean logic

/*
logical operators: && - AND, || - OR, ! - NOT
bitwise operators: & - AND, | - OR, ^ - XOR, ~ - NOT, << - shift left, >> - shift right

AND

A && B = C
1    1   1
0    1   0
1    0   0
0    0   0


OR

A || B = C
1    1   1
0    1   1
1    0   1
0    0   0

NOT

!A = B
 1   0
 0   1

 
*/ 



int main() {

    bool a = true;
    bool b = false;

    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << !a << endl;

    return 0;
}