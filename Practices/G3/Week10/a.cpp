#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    if(a % 2 != b % 2) return b % 2;
    else if(a % 2 == 0 && b % 2 == 0) return a > b;
    else return a < b;
}

int main() {

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}