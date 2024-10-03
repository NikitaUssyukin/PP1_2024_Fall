#include <iostream>

using namespace std;

int main() {

    int n = 3;

    // declaring a 2D-array
    int a[n][n];

    // inputting elements in a 2D-array using a nested for loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    // outputting elements in a 2D-array using a for loop
    for(int i = 0; i < n; ++i) {    
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}