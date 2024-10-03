#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int width = 4;

    int n; // amount of 1D-arrays (rows)
    int m; // amount of elements in each 1D-array (columns)

    cin >> n >> m;


    int a[n][m];

    // input using a nested loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // output using a nested loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << setw(width) << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}