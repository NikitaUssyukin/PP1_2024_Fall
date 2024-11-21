#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

char K = 64; // 'A' - 1;

char alphabetGen() {
    return ++K;
}

int main() {


    int n;
    cin >> n; // n cannot be larger than 26;
    n %= 27;
    vector<char> v(n); // vector with n elemenents, non-empty

    generate(v.begin(), v.end(), alphabetGen);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}