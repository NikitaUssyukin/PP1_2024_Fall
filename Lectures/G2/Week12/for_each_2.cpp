#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int K;

void multiplyByK(int &a) {
    a *= K;
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

    cin >> K; // K is a global variable

    for_each(v.begin(), v.end(), multiplyByK);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}