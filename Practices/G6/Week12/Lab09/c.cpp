#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int K = 0;

long long sequenceGen() {
    long long power = powl(K, K);
    ++K;
    return power;
}

int main() {

    int n;
    cin >> n;
    vector<long long> v(n + 1); // vector with n elements, non-empty

    generate(v.begin(), v.end(), sequenceGen);
    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}