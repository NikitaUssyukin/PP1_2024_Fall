#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int z;
    cin >> z;

    z %= n; // removing the compete shifts of the elements by n

    if(z > 0) {
        for(int i = n - z; i < n; ++i) {
            cout << a[i] << ' ';
        }
        for(int i = 0; i < n - z; ++i) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    else {
        z = -z; // making z positive
        for(int i = z; i < n; ++i) {
            cout << a[i] << ' ';
        }
        for(int i = 0; i < z; ++i) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}