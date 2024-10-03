#include <iostream>

using namespace std;

int main() {

    int n = 3;

    /*
    2D-array - array consisting of 1D-arrays

    You can think of it as a matrix, i.e. having rows and columns
    */

    int a[n][n];

    // input using loops
    for(int i = 0; i < n; ++i) {
        cin >> a[0][i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> a[1][i];
    }
    
    for(int i = 0; i < n; ++i) {
        cin >> a[2][i];
    }

    // output using loops
    for(int i = 0; i < n; ++i) {
        cout << a[0][i] << ' ';
    }
    cout << endl;

    for(int i = 0; i < n; ++i) {
        cout << a[1][i] << ' ';
    }
    cout << endl;

    for(int i = 0; i < n; ++i) {
        cout << a[2][i] << ' ';
    }
    cout << endl;

    return 0;
}