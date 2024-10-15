#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n * m];

    for(int i = 0; i < n * m; ++i) {
        cin >> a[i];
    }

    sort(a, a + n * m);

    int b[10000] = {};

    int start = 0;
    int end = n * m - 1;

    for(int i = 0; i < n * m; ++i) {
        if(i % 2 == 0) b[i] = a[end--];
        else b[i] = a[start++];
            
        if(start > end) break;

    }

    // cout << "--------\n";

    for(int i = 0; i < n * m; ++i) {
        if(i % m == 0 && i != 0) cout << endl;
        cout << b[i] << ' ';
    }
    cout << endl;

    return 0;
}