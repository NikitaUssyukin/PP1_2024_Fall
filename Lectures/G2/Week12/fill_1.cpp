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

    fill(v.begin(), v.begin(), k);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}