#include <iostream>

using namespace std;

int a[100]; // global array filled with zeroes

// function prototype
void inputArray(int n);
void mutateArray(int n);
void printArray(int n);

void run(int n) {
    inputArray(n);
    mutateArray(n);
    printArray(n);
}

void inputArray(int n) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void mutateArray(int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

void printArray(int n) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    int a[n];
    
    run(n);

    return 0;
}