#include <iostream>

using namespace std;

// conditional statements
// if, else if, else


int main() {
    
    bool a = false;
    bool b = true;

    if(a && b) {
        cout << "a and b are both true\n";
    }
    else if(a || b) {
        if(a) {
            cout << "a is true\n";
        }
        else {
            cout << "b is true\n";
        }
    }
    else {
        cout << "neither a nor b is true\n";
    }

    return 0;
}