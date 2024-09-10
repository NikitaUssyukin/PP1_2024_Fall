#include <iostream>

using namespace std;

/*
Bitwise operators
&  - AND
|  - OR
^  - XOR
~  - NOT
>> - bitwise shift right
<< - bitwise shift left
*/

/*
15 & 14

15 in binary: 1111
14 in binary: 1110

1111 & 1110 = 1110
*/

int main() {

    int a, b;

    cin >> a >> b;

    cout << (a & b) << endl;

    return 0;
}