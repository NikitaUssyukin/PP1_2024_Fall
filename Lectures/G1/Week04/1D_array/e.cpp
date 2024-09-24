#include <iostream>

using namespace std;

int main() {

    int a[10];

    // This is an error, using elements of the array 
    // without giving them an initial value
    for(int i = 0; i < 10; ++i) {
        cout << a[i] << " ";
    } 
    cout << endl;

    // To fix that, we either give all the elements an initial value:
    for(int i = 0; i < 10; ++i) {
        a[i] = 0;
    }

    // or we can take the values from the input
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    return 0;
}