#include <iostream>
#include <algorithm>
#include <vector>

void multiplyByTwo(int &a) {
    a *= 2;
}

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

    for_each(v.begin(), v.end(), multiplyByTwo);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}