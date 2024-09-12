#include <iostream>

using namespace std;

// conditional statements
// if, else if, else

int main() {
    
    int a;

    cin >> a;

    if(a < 0) {
        cout << "a is negative, we don't take that\n";
    }
    else if(a < 10) {
        cout << "a is a 1 digit number\n";
    }
    else if(a < 100) {
        cout << "a is a 2 digit number\n";
    }
    if(a < 1000) {
        cout << "a is a 3 digit number\n";
    }
    else {
        cout << "a is a 4 or more digit number\n";
    }

    return 0;
}