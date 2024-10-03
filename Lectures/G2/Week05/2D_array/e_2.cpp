#include <iostream>

using namespace std;

int main() {

    int n; // amount of 1D-arrays (rows)
    int m; // amount of elements in each 1D-array (columns)

    cin >> n >> m;

    /*
    2D-array - array consisting of 1D-arrays

    You can think of it as a matrix, i.e. having rows and columns
    */

    int a[n][m];

    // input using a nested loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // addresses in 2D-arrays

    // address of the first element in the first 1D-array
    cout << *a << endl;

    // address of the first element in the second 1D-array
    cout << *(a + 1) << endl;

    // address of the first element in the third 1D-array
    cout << *(a + 2) << endl;

    return 0;
}