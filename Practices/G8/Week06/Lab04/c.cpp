#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int a[1000][1000] = {}; // if you run this on your PC, 1000 x 1000 may not work
    // try 500 x 500
    // on ejudge 1000 x 1000 works fine

    int k;

    cin >> k;

    while(k > 0) {
        int x, y;
        cin >> y >> x;

        a[y][x] = -1;

        for(int i = y - 1; i <= y + 1; ++i) {
            for(int j = x - 1; j <= x + 1; ++j) {
                if(a[i][j] == -1) continue;
                else if((0 <= i && i < n) && (0 <= j && j < m)) {
                    ++a[i][j];
                }
            }
        }

        --k;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == 0) cout << '.' << ' ';
            else if(a[i][j] == -1) cout << '*' << ' ';
            else cout << a[i][j] << ' ';
        }
        cout << endl;
    } 

    return 0;
}