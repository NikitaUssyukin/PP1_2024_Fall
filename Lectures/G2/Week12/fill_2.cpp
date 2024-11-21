#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n); // vector with n elements, non-empty

    int k;
    cin >> k;

    int left, right;
    cin >> left >> right; // indexes starting with 0

    fill(v.begin() + left, v.begin() + right + 1, k);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}