#include <iostream>

using namespace std;

int main() {

    // Digits:
    for(int i = 48; i < 58 /* 48 + 10 */; ++i) {
        cout << char(i) << " " << i << endl;
    }
    cout << "-----------------\n";

    // Uppercase English letters:
    for(int i = 65; i < 91 /* 65 + 26 */; ++i) {
        cout << char(i) << " " << i << endl;
    }
    cout << "-----------------\n";

    // Lowercase English letters:
    for(int i = 97; i < 123 /* 97 + 26 */; ++i) {
        cout << char(i) << " " << i << endl;
    }

    return 0;
}