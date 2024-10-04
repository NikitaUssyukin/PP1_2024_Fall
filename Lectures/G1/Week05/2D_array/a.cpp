#include <iostream>

using namespace std;

int main() {

    int n = 3;

    int a1[n];
    int a2[n];
    int a3[n];

    a1[0] = 1;
    a1[1] = 2;
    a1[2] = 3;

    a2[0] = 4;
    a2[1] = 5;
    a2[2] = 6;
    
    a3[0] = 7;
    a3[1] = 8;
    a3[2] = 9;

    cout << a1[0] << ' ' << a1[1] << ' ' << a1[2] << ' ' << endl;
    cout << a2[0] << ' ' << a2[1] << ' ' << a2[2] << ' ' << endl;
    cout << a3[0] << ' ' << a3[1] << ' ' << a3[2] << ' ' << endl;

    return 0;
}