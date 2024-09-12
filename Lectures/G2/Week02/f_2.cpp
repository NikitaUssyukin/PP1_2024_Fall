#include <iostream>

using namespace std;

// conditional operator
// if, else if, else

int main() {

    int a;

    cin >> a;

    if(a < 0) {
        cout << "a is negative, we do not take that" << endl;
    }
    else if(a < 10) {
        cout << "a is a 1 digit number" << endl;
    }
    else if(a < 100) {
        cout << "a is a 2 digit number" << endl;
    }
    else {
        cout << "a has 3 or more digits" << endl;
    }

    return 0;
}