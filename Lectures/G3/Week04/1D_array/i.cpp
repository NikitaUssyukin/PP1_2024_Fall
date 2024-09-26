#include <iostream>

using namespace std;

int main() {

    int arraySize = 1000; // real size of the array in memory

    int n; // virtual (logical) size 
    cin >> n; 

    int a[arraySize] = {}; // if the real size of the array is fixed in the program
    // = {} gives all the elements the initial value of 0
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Elements that we're using (virtual size):\n";
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    cout << "All the elements in the array (real size):\n";
    for(int i = 0; i < arraySize; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}