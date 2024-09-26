#include <iostream>

using namespace std;

int main() {

    // ASCII codes of A-Z
    for(int i = 'A'; i <= 'Z'; ++i) {
        cout << i << " " << char(i) << endl;
    }

    return 0;
}