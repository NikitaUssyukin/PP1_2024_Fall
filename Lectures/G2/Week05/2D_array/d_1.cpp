#include <iostream>

using namespace std;

int main() {

    int n = 3;

    /*
    2D-array - array consisting of 1D-arrays

    You can think of it as a matrix, i.e. having rows and columns
    */

    int a[n][n];

    // input using a nested loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    // output using a nested loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}