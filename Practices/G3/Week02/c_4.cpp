#include <iostream>

using namespace std;

// loops
// while, for, do while

int main() {
    
    for(int i = 1; i < 10; i *= 2 /* same as i = i * 2 */) {
        cout << "i: " << i << endl;
    }

    return 0;
}