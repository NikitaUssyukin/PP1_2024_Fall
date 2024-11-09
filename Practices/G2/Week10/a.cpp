#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

    map<string, int> m;

    m["Cat"] = 10;
    m["Bear"] = 2;

    vector<pair<string, int> > v(m.begin(), m.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}