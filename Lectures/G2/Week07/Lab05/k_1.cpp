#include <iostream>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    int cnt1[26] = {};
    int cnt2[26] = {};

    if(s1.size() != s2.size()) {
        cout << "NO\n";
        return 0;
    }

    for(int i = 0; i < s1.size(); ++i) {
        ++cnt1[s1[i] - 'a'];
        ++cnt2[s2[i] - 'a'];
    }

    bool nearlyEqual = true;
    for(int i = 0; i < 26; ++i) {
        if(cnt1[i] != cnt2[i]) {
            nearlyEqual = false;
            break;
        }
    }
    
    if(nearlyEqual) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}