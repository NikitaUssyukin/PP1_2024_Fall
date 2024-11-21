#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    map<char, int> m;

    string str;
    cin >> str;

    set<char> s(str.begin(), str.end());

    set<char>::iterator it1;

    for(set<char>::iterator it1 = s.begin(); it1 != s.end(); ++it1) {
        ++m[*it1];
    }

    map<char, int>::iterator it2;
    for(it2 = m.begin(); it2 != m.end(); ++it2) {
        cout << it2->first << ' ' << it2->second << endl; 
    }

    return 0;
}