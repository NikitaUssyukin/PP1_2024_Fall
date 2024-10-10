#include <iostream>

using namespace std;

int main() {

    string s = "Hello, KBTU!";

    // string is a an array of chars under the hood;
    // like this: char arr[10];

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}