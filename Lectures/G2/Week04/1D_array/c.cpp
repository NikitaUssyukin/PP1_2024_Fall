#include <iostream>

using namespace std;

int main() {

    int a[5]; // array declaration
    // int - data type, a - identifier, [] mean that we have an array
    // and 5 is the size of the array
    // the size of the array means the amount of elements in the array

    // we access elements of the array by using element's index
    // indexes start from 0
    // and the last index is the size of the array minus 1

    // input using a for loop
    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    // output using the for loop
    for(int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}