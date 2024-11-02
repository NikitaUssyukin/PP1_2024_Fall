#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ++m[x];
    }

    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        if(it->second == 1) cout << it->first << endl;
    }

    return 0;
}

