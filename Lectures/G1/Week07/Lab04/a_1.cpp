#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    sort(*a, *(a + n));

    int b[100][100] = {};

    int start_i = 0;
    int start_j = 0;
    int end_i = n - 1;
    int end_j = m - 1;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(m % 2 != 0) {
                if((i + j) % 2 == 0) {
                    b[i][j] = a[end_i][end_j--];
                    // cout << end_i << ' ' << end_j << endl;
                }
                else {
                    b[i][j] = a[start_i][start_j++];
                }
            }
            else {
                if(j % 2 == 0) {
                    b[i][j] = a[end_i][end_j--];
                    // cout << end_i << ' ' << end_j << endl;
                }
                else {
                    b[i][j] = a[start_i][start_j++];
                }
            }
            if(end_j < 0) {
                end_j = m - 1;
                --end_i;
            }
            if(start_j == m) {
                start_j = 0;
                ++start_i;
            }
            if(start_i >= end_i && start_j > end_j) break;

            // cout << i << j << endl;
            // cout << "---\n";
            // for(int k = 0; k < n; ++k) {
            //     for(int l = 0; l < m; ++l) {
            //         cout << b[k][l] << ' ';
            //     }
            //     cout << endl;
            // }
            // string temp;
            // cin >> temp;
        }
    }

    // cout << start_i << ' ' << start_j << endl;
    // cout << end_i << ' ' << end_j << endl;

    // cout << "\n--------------\n";

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}