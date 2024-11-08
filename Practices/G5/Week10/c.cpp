#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

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

    map<char, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        if(it->second == n) cout << it->first << ' ';
    }
    cout << endl;

    
    return 0;
}
