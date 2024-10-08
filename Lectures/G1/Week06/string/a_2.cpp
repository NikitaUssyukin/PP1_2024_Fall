#include <iostream>

using namespace std;

int main() {

    string s = "Hello, KBTU!";

    int length = s.size();

    cout << length << endl;

    for(int i = 0; i < length; ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}