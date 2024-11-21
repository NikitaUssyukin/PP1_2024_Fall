#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void multiplyByTwo(int &a) {
    a *= 2;
}

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

    for_each(v.begin(), v.end(), multiplyByTwo);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}