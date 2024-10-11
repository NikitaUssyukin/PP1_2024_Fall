#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    string res;

    for(int i = 0; i < s.size(); ++i) {
        if('1' <= s[i] && s[i] <= '9') {
            res += s[i];
        }
    }

    cout << res << endl;

    return 0;
}