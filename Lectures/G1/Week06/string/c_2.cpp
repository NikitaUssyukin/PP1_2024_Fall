#include <iostream>

using namespace std;

int main() {

    string s = "abc";

    for(int i = 0; i < s.size(); ++i) {
        ++s[i];
    }

    cout << s << endl;

    return 0;
}