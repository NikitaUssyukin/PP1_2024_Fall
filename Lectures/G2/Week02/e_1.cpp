#include <iostream>

using namespace std;

// conditional operator
// if, else if, else

int main() {

    int a;

    cin >> a;

    if(a > 0) {
        cout << "a is positive" << endl;
    }
    else if(a < 0) {
        cout << "a is negative" << endl;
    }
    else {
        cout << "a is zero" << endl;
    }

    return 0;
}