#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;

    int sum = 0;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    int requiredSum = double(n + 1) / 2 * n;

    cout << requiredSum - sum << endl;

    return 0;
}