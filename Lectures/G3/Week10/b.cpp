#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string str1, string str2) {
    return str1.size() < str2.size();
}

int main() {

    set<string> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        s.insert(x);
    }

    vector<string> v(s.begin(), s.end());

    // set<string>::iterator it;
    // for(it = s.begin(); it != s.end(); ++it) {
    //     cout << *it << ' ';
    // }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    for(string str : v) {
        cout << str << endl;
    }

    return 0;
}