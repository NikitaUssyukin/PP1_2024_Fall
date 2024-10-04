#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;

    int b[m];

    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int c[n + m];

    int i = 0; // points at the element in array a
    int j = 0; // points at the element in array b
    int k = 0; // points at the element in array c

    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            c[k] = a[i];
            ++k;
            ++i;
        } 
        else {
            c[k] = b[j];
            ++k;
            ++j;
        }
    }

    while(i < n) {
        c[k] = a[i];
        ++k;
        ++i;
    }

    while(j < m) {
        c[k] = b[j];
        ++k;
        ++j;
    }

    for(int l = 0; l < n + m; ++l) {
        cout << c[l] << ' ';
    }
    cout << endl;

    return 0;
}