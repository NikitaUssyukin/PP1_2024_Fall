#include <iostream>

using namespace std;

int main() {

    int a[100][100] = {};

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        a[0][i] = i;
        a[i][0] = i;
        a[i][i] = i * i;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}