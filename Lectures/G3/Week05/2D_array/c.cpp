#include <iostream>

using namespace std;

int main() {

    int n = 3;

    // declaring a 2D-array
    int a[n][n];

    // inputting elements in a 2D-array using a for loop
    for(int j = 0; j < n; ++j) {
        cin >> a[0][j];
    }

    for(int j = 0; j < n; ++j) {
        cin >> a[1][j];
    }

    for(int j = 0; j < n; ++j) {
        cin >> a[2][j];
    }

    // outputting elements in a 2D-array using a for loop
    for(int j = 0; j < n; ++j) {
        cout << a[0][j] << ' ';
    }
    cout << endl;
    
    for(int j = 0; j < n; ++j) {
        cout << a[1][j] << ' ';
    }
    cout << endl;

    for(int j = 0; j < n; ++j) {
        cout << a[2][j] << ' ';
    }
    cout << endl;

    return 0;
}