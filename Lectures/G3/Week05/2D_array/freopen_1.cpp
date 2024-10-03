#include <iostream>

using namespace std;

int main() {
    // taking input from the txt file using freopen()
    freopen("input.txt", "r", stdin);

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
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}