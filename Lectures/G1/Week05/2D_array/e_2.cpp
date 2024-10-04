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

    // outputting addresses of the 1st elements of the 1D arrays within a 2D array
    // and then the value pointed by this address
    for(int i = 0; i < n; ++i) {
        cout << *(a + i) << endl; // address
        cout << **(a + i) << endl;// value
    }

    return 0;
}