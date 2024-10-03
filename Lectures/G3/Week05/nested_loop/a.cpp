#include <iostream>

using namespace std;

int main() {

    for(int i = 1; i <= 3; ++i) { // outer loop
        cout << "i: " << i << endl;
        cout << "j:\n";
        for(int j = 1; j <= 3; ++j) { // inner loop
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}