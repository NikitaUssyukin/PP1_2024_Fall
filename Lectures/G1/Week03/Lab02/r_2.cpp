#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n; // n can have any number of bits

    cout << (n ^ 255) << endl;

    return 0;
}

/*
1111 1111
XOR
1011 0111

0100 1000

*/