#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    // freopen("r_input.txt", "r", stdin);

    map<char, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {

        string str;
        cin >> str;

        set<char> s(str.begin(), str.end());

        set<char>::iterator it;
        for(it = s.begin(); it != s.end(); ++it) {
            ++m[*it];
        }
    }

    bool no_common_chars = true;

    map<char, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        if((*it).second == n) {
            cout << it->first << ' ';
            no_common_chars = false;
        } 
    }
    
    if(no_common_chars) cout << "NO COMMON CHARACTERS";
    cout << endl;

    return 0;
}