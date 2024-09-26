#include <iostream>

using namespace std;

int main() {

    int n; // variable for the size of the array
    cin >> n;

    int a[n]; // n determines the size of the array only at the point of its declaration (creation)
    // changing the variable afterwards does not change the size of the array
    // the size of the array is static; it is impossible to change after the array has been declared

    // input using a for loop
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // output using the for loop
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}