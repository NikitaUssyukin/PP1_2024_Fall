#include <iostream>

using namespace std;

int main() {

    // printing your own ASCII table for A-Z:
    for(int i = 'A'; i <= 'Z'; ++i) {
        cout << i << " " << char(i) << endl;
    }

    return 0;
}