#include <iostream>

using namespace std;

int main() {

    int a = 1;

    while(a <= 5) {
        cout << a++ << endl;
    }

    cout << "Value of a after the while loop: " << a << endl;

    return 0;
}