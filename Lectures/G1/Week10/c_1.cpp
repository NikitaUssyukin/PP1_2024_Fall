#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2) { // sorting by the second value first
    if (p1.second != p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main() {

    map<string, int> m;
    vector<pair<string, int> > v;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        m[s] = x;
    }

    cout << "--------------\n";

    v.insert(v.begin(), m.begin(), m.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    cout << "--------------\n";

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }


    return 0;
}


