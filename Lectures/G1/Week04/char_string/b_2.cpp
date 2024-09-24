#include <iostream>

using namespace std;

int main() {

    // Digits:
    for(int i = '0'; i < '9'; ++i) {
        cout << char(i) << " " << i << endl;
    }
    cout << "-----------------\n";

    // Uppercase English letters:
    for(int i = 'A'; i <= 'Z'; ++i) {
        cout << char(i) << " " << i << endl;
    }
    cout << "-----------------\n";

    // Lowercase English letters:
    for(int i = 'a'; i <= 'z'; ++i) {
        cout << char(i) << " " << i << endl;
    }

    return 0;
}