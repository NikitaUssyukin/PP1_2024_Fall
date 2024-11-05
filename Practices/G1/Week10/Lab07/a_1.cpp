#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i) {
        if(i != v[i]) {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}

/*
3
1 0 3

sort

v[i]: 0 1 3
   i: 0 1 2

2
0 1

sort

v[i]: 0 1 
   i: 0 1
*/