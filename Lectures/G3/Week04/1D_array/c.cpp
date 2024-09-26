#include <iostream>

using namespace std;

int main() {

    int a[5]; // array declaration
    // int - data type for the array
    // a - identifier (name)
    // [] - show that we declare an array
    // 5 - size of the array (amount of elements of the array)

    // input using for loop
    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    // output using for loop
    for(int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}