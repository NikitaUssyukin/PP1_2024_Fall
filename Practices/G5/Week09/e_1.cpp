#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    for(int i = 1; i <= 5; i++) {
        string s; cin >> s;
        m[s] = i;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

