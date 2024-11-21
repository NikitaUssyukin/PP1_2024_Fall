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

    int k;
    cin >> k;

    if(k > 0) {
        k %= v.size();
        rotate(v.begin(), v.begin() + k, v.end());
    }
    else if(k < 0) {
        k = -k;
        k %= v.size();
        rotate(v.begin(), v.begin() + v.size() - k, v.end());
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}