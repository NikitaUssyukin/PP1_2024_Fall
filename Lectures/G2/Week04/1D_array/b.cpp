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

    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];

    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << " ";
    cout << a[4] << "\n";
    

    return 0;
}