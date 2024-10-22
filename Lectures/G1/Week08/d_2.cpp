#include <iostream>

using namespace std;

void printArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void mutateArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

int main() {

    int n = 5;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    mutateArray(a, n);

    printArray(a, n);

    return 0;
}