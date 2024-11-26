#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main() {

    map<string, int> m;

    string x;
    while(cin >> x) {
        ++m[x];
    }

    vector<pair<string, int> > v(m.begin(), m.end());

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " : " << v[i].second << endl; 
    }

    return 0;
}
