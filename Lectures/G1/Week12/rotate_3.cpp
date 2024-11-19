#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // rotate k elements right
    int k;
    cin >> k;

    k %= v.size(); // removes unneeded shifts

    if(k != 0) {
        rotate(v.begin(), v.end() - k, v.end());
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}