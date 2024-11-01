#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main() {

    vector<int> v;
    set<int> s;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    s.insert(v.begin(), v.end());

    cout << s.size() << endl; // amount of unique elements

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}