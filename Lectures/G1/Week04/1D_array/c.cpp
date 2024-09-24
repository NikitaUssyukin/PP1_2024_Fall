#include <iostream>

using namespace std;

int main() {

    int a[5]; // number inside square brackets is the size of the array
              // size, i.e. number of elements in the array

    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}