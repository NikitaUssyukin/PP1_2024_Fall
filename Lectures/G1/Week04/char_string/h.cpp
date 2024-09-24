#include <iostream>

using namespace std;

int main() {

    // string - compound data type
    // allows us to store multiple characters in one variable

    string a = "123";

    string b;

    cin >> b;

    a += b;

    cout << a << endl;

    return 0;
}