#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;

    while(n > 0) {

        int x;
        cin >> x;
        v.push_back(x);

        --n;
    }

    vector<int>::iterator it;
    it = unique(v.begin(), v.end());

    v.erase(it, v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}