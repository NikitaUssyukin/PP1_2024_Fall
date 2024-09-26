#include <iostream>

using namespace std;

int main() {

    int n; // virtual (logical) size of the array
    cin >> n; 

    int arraySize = 1000; // real (physical) size of the array

    int a[arraySize] = {}; 

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}