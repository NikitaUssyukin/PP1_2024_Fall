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

    // all values of the first 1D-array
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << *(*(a + i) + j) << ' ';
            // *(*(a + i) + j) is how a[i][j] works under the hood
        }
        cout << endl;
    }

    return 0;
}