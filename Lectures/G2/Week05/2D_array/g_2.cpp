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

    // sorting from the a[0][1] element including up to a[2][2] not including
    sort(*a + 1, *(a + 2) + 2);
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}