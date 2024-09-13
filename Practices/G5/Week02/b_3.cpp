#include <iostream>

using namespace std;

int main() {

    for(int i = 1, j = 5; i <= 5 && j >= 1; ++i, --j) {
        cout << "i: " << i << ", j: " << j << endl;
    }

    return 0;
}