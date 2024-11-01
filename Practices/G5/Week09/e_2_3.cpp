#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        int x; 
        cin >> s >> x;
        m[s] = x;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

