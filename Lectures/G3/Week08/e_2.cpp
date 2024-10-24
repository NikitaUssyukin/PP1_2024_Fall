#include <iostream>

using namespace std;

void printArray(int a[], int n) {
    cout << sizeof(a) << endl;
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << sizeof(a) << endl;
    cout << sizeof(a) / sizeof(int) << endl;

    printArray(a, n);

    return 0;
}