#include <iostream>

using namespace std;

int main() {

    int n; // stores the size of the array
    cin >> n;

    int a[n]; // declares an array of n elements
    // n determines the size of the array only at the moment of its declaration
    // afterwards, it simply stores the size of the array
    // arrays are static in size - the size cannot be changed after creating the array

    // input using for loop
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // output using for loop
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}