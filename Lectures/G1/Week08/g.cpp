#include <iostream>

using namespace std;

int a[100][100];

void input2DArray(int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
}

void print2DArray(int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {

    int n, m;
    cin >> n >> m;
    

    input2DArray(n, m);
    
    print2DArray(n, m);

    return 0;
}