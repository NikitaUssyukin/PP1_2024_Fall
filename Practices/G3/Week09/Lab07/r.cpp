#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<char, int> m;

    for(int i = 0; i < n; ++i ) {
        string s;
        cin >> s;
        set<char> chars(s.begin(), s.end());

        set<char>::iterator it;
        for(it = chars.begin(); it != chars.end(); ++it) {
            ++m[*it];
        }
        
    }

    bool commomCharsExist = false;

    map<char, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        // cout << it->first << ' ' << it->second << endl;
        if(it->second == n) {
            cout << it->first << ' ';
            commomCharsExist = true;
        }
    }
    
    if(!commomCharsExist) {
        cout << "NO COMMON CHARACTERS"; 
    }
    cout << endl;

    return 0;   
}
