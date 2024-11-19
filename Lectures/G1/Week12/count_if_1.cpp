#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEven(int a) {
    return a % 2 == 0;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << count_if(v.begin(), v.end(), isEven);

    return 0;
}