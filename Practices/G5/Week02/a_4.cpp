#include <iostream>

using namespace std;

int main() {

    int a = 1;

    // infinite loop example
    while(true) {
        cout << a++ << endl;
    }

    cout << "Value of a after the while loop: " << a << endl;

    return 0;
}