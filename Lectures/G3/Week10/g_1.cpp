#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2) {
    if(p1.second != p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main() {

    vector<pair<string, int> > v;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        pair<string, int> p = make_pair(s, x);
        v.push_back(p);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}