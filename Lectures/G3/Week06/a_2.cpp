#include <iostream>

using namespace std;

int main() {

    string s = "Hello, KBTU!";

    // string is a an array of chars under the hood;
    // like this: char arr[10];

    int length = s.size();

    cout << length << endl;

    for(int i = 0; i < length; ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}