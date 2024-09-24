#include <iostream>

using namespace std;

int main() {

    // string - compound data type
    // allows us to store multiple characters in one variable

    string a = "Hello";

    string b;

    cin >> b;

    a += ' ';

    a += b;

    cout << a << endl;

    return 0;
}