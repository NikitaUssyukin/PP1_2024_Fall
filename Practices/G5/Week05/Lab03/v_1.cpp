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
        while(z > 0) {
            int last = a[n - 1];
            for(int i = n - 1; i > 0; --i) {
                a[i] = a[i - 1];
            }
            a[0] = last;
            --z;
        }
    }
    else {
        while(z < 0) {
            int first = a[0];
            for(int i = 0; i < n - 1; ++i) {
                a[i] = a[i + 1];
            }
            a[n - 1] = first;
            ++z;
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}