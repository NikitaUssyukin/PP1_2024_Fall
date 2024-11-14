#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;
    set<int> s;

    while(n > 0) {

        int x;
        cin >> x;

        v.push_back(x);
        s.insert(x);

        --n;
    }    

    int cnt = 0;

    for(int i = 0; i < v.size(); ++i) {
        for(int j = i + 1; j < v.size(); ++j) {
            if(s.count(v[i] ^ v[j])) ++cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}