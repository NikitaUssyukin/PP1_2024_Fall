#include <iostream>

using namespace std;

int main() {

    // All visible symbols in standard ASCII:
    for(int i = 32; i < 127; i++) {
        cout << i << ' ' << char(i) << endl;
    }

    return 0;
}