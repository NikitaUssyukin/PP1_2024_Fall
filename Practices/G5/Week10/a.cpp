#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2) {
    if(p1.second != p2.second) return p1.second > p2.second;
    return p1.first < p2.first;
}

int main() {

    map<string, int> m;

    m["Dog"] = 5;
    m["Parrot"] = 10;
    m["Rat"] = 20;

    vector<pair<string, int> > v(m.begin(), m.end());

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}
