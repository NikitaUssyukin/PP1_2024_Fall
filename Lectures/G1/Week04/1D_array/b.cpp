#include <iostream>

using namespace std;

int main() {

    int a[5]; // number inside square brackets is the size of the array
              // size, i.e. number of elements in the array

    cin >> a[0]; // here we have an index of the element inside the square brackets
    cin >> a[1]; // indexes in the array start from 0
    cin >> a[2]; // 0 means 0 elements away from the start of the array (first element)
    cin >> a[3]; // 1 - 1 element away from the start of the array (second element)
    cin >> a[4]; // etc

    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << " ";
    cout << a[4] << " ";

    return 0;
}