#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int m;
    cin >> n >> m;

    int a[n][m];
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // sorting 2D array in the range [a[0][1] ; a[n-1][m-1])
    sort(*a + 1, *(a + n - 1) + m - 1);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}