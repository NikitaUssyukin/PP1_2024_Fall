#include <iostream>

using namespace std;

int main() {

    // ASCII codes 0 - 199 and the corresponding characters
    for(int i = 0; i < 200; ++i) {
        cout << i << " " << char(i) << endl;
    }

    return 0;
}