#include <iostream>

using namespace std;

void mutateArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

void printArray(int a[], int n) {

    mutateArray(a, n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {

    int n = 5;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    printArray(a, n);

    return 0;
}