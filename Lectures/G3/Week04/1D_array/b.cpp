#include <iostream>

using namespace std;

int main() {

    int a[5]; // array declaration
    // int - data type for the array
    // a - identifier (name)
    // [] - show that we declare an array
    // 5 - size of the array (amount of elements of the array)

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