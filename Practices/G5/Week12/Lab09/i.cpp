#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void vOut(vector<int> v) {
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {

    vector<int> v;
    set<int> s;
    
    int n;
    cin >> n;

    while(n > 0) {

        int x;
        cin >> x;
        if(s.find(x) == s.end()) {
            s.insert(x);
            v.push_back(x);
        }

        --n;
    }

    do {
        vOut(v);
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}