#include <iostream>

using namespace std;

int main() {

    // standard visible ASCII table
    for(int i = 32; i <= 126; ++i) {
        char c = i; // implicit type casting
        cout << i << ' ' << c  << endl;
    }

    return 0;
}