#include <iostream>

// numeric systems

/*
binary

converting decimal to binary
*/

using namespace std;

int main() {

    int a;
    cin >> a;

    int index = 0;

    while(a > 0) {
        if(a % 2 == 1) break;
        a /= 2;
        ++index;
    }
    cout << index << endl;

    return 0;
}