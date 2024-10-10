#include <iostream>

using namespace std;

int main() {

    string s = "Hello, KBTU!";

    int length = s.size();

    cout << length << endl;

    for(int i = length - 1; i >= 0; --i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}