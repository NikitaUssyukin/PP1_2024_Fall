#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // amount of 1D arrays (amount of rows)
    int m; // amount of elements in each 1D array (amount of columns)

    cin >> n >> m;

    // declaring a 2D-array
    int a[n][m];

    // inputting elements in a 2D-array using a nested for loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // sorting the whole 2D array
    sort(*a, *(a + n));

    // outputting values of the first elements of 1D-arrays
    for(int i = 0; i < n; ++i) { 
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}