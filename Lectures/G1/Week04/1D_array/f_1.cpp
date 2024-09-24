#include <iostream>

using namespace std;

int main() {

    int a[5];

    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < 5; ++i) {
        cout << "Address of the element " << i << ": " << a + i << endl;
        cout << "Value of the element " << i << ": " << a[i] << endl;
    }

    return 0;
}