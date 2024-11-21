#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int K = 0;

int sequenceGen() {
    return ++K;
}

int main() {


    int n;
    cin >> n;
    vector<int> v(n); // vector with n elemenents, non-empty

    generate(v.begin(), v.end(), sequenceGen);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}