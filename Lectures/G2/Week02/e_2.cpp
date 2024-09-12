#include <iostream>

using namespace std;

// conditional operator
// if, else if, else

int main() {

    int a;

    cin >> a;

    if(a >= 0) {
        cout << "a is positive or 0" << endl;
    }
    if(a <= 0) {
        cout << "a is negative or 0" << endl;
    }
    if(a == 0) {
        cout << "a is zero" << endl;
    }

    return 0;
}