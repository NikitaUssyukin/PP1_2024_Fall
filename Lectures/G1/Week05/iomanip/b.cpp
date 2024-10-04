#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int width = 4;

    int n; 
    int m; 

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

   
    for(int i = 0; i < n; ++i) { 
        for(int j = 0; j < m; ++j) {
            cout << setw(width) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}