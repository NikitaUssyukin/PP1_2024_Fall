#include <iostream>

using namespace std;

// loops
// while, for, do while

int main() {
    
    for(int i = 0, j = 10; i < 10 && j >= 0; ++i, --j) {
        cout << "i: " << i << ", j: " << j << endl;
    }

    return 0;
}