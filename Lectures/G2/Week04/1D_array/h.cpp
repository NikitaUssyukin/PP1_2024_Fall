#include <iostream>

using namespace std;

int main() {

    int n = 0; // virtual (logical) size of the array 

    int arraySize = 1000; // real (physical) size of the array

    int a[arraySize] = {}; 

    int temp;
    while(cin >> temp) {
        a[n] = temp;
        ++n;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}