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

    // sorting a whole 2D-array
    sort(*a, *(a + n));

    // first - *a - address of the first element included in sorting
    // last - *(a + n) - address after the last element included in sorting
    // the address *(a + n) is not included in sorting
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}