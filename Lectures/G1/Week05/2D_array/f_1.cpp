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

    // sorting the whole 2D array
    sort(*a, *(a + n));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}