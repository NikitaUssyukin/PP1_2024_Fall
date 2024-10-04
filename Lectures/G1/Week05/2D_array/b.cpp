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

    // accesing elements in a 2D-array
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;

    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    
    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    cout << a[0][0] << ' ' << a[0][1] << ' ' << a[0][2] << ' ' << endl;
    cout << a[1][0] << ' ' << a[1][1] << ' ' << a[1][2] << ' ' << endl;
    cout << a[2][0] << ' ' << a[2][1] << ' ' << a[2][2] << ' ' << endl;

    return 0;
}