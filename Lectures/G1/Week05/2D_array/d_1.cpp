#include <iostream>

using namespace std;

int main() {

    int n = 3;

    /*
    2D-array - array consisting of 1D-arrays

    You can think of it as a matrix, i.e. having rows and columns
    */

    // declaring a 2D-array
    int a[n][n];
    /*
    first square bracket - amount of 1D arrays (amount of rows)
    second square bracket - amount of elements in 1D arrays (amount of columns)
    */

    // accessing elements in a 2D array
    /*
    first square bracket - index of the 1D array (index of the row)
    second square bracket - index of the element in the specified 1D array (index of the column)
    */

    // getting input using nested for loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][i];
        }
    }

    // output using nested for loop
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}