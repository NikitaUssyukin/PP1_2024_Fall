#include <iostream>

using namespace std;

// function prototypes
void inputArray(int a[], int n);
void mutateArray(int a[], int n);
void printArray(int a[], int n);

void run(int *a, int n) {
    inputArray(a, n);
    mutateArray(a, n);
    printArray(a, n);
}

void inputArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void mutateArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

void printArray(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void printSizeOf(int *a) {
    cout << sizeof(a) << endl;
}

int main() {

    int n;
    cin >> n; 
    int a[n];

    cout << sizeof(a) << endl;
    cout << sizeof(a) / sizeof(int) << endl;

    printSizeOf(a);

    // run(a, n);    

    return 0;
}