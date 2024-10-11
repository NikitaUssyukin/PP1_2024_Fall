#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n][n];

    int cnt = 1;

    int x = 0;
    int y = n - 1;

    while(x <= y) {
        // 1) first row
        for(int j = x; j <= y; ++j) {
            a[x][j] = cnt++;
        }
        
        // 2) last column
        for(int i = x + 1; i <= y; ++i) {
            a[i][y] = cnt++;
        }

        // 3) last row
        for(int j = y - 1; j >= x; --j) {
            a[y][j] = cnt++;
        }

        // 4) first column
        for(int i = y - 1; i > x; --i) {
            a[i][x] = cnt++;
        }

        // 5) 
        ++x;
        --y;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}