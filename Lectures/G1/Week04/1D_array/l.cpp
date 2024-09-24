#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    // infinite input into the array
    int a[1000];
    int arraySize = 0; // logical size

    int b;
    while(cin >> b) {
        a[arraySize] = b;
        ++arraySize;
    }

    for(int i = 0; i < arraySize; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}