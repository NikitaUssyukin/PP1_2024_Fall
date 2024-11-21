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

    rotate(v.begin(), v.begin() + 1, v.end());
    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}