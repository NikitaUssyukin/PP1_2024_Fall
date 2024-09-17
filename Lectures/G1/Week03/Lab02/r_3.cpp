#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n; // n can have any number of bits

    cout << 255 - n << endl;

    return 0;
}

/*
   255    -   183     =     72
1111 1111 - 1011 0111 = 0100 1000
*/