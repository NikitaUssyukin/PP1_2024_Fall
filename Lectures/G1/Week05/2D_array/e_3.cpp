#include <iostream>

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

    // outputting all values stored in a 2D array
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << *(*(a + i) + j) << ' ';
            // *(*(a + i) + j) is equivalent to a[i][j]
        }
        cout << endl;
    }

    return 0;
}