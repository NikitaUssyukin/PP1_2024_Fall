#include <iostream>
#include <vector>

using namespace std;

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

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}

