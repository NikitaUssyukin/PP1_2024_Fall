#include <iostream>

using namespace std;

int main() {

    for(int i = 1; i <= 100; i *= 2 /* same as i = i * 2 */) {
        cout << "i: " << i << endl;
    }

    return 0;
}