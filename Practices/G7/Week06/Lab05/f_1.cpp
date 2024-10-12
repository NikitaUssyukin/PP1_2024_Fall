#include <iostream>

using namespace std;

int main() {

    int cnt[10] = {}; // counter array for numbers 0-9

    string s;
    cin >> s;

    // for(int i = '0'; i <= '9'; ++i) {
    //     cout << i << ' ' << char(i) << endl;
    // }

    for(int i = 0; i < s.size(); ++i) {
        ++cnt[s[i] - '0']; 
        // s[i] - '0' is the same as s[i] - 48
    }

    bool allEqual = true;
    int value = -1;

    for(int i = 1; i < 10; ++i) {
        if(value == -1 && cnt[i] > 0) value = cnt[i];
        if(cnt[i] > 0 && cnt[i] != value) {
            allEqual = false;
            break;
        }
    }

    if(allEqual) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

