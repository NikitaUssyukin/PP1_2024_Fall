#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void toBinary(int n) {
    string bin;
    while(n > 0) {
        int bit = n % 2;
        n /= 2;
        bin += (bit + '0');
        // 0 + '0' == '0'
        // 1 + '0' == '1'
    }
    reverse(bin.begin(), bin.end());
    cout << bin << endl;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;

    while(n > 0) {
        
        int x;
        cin >> x;
        v.push_back(x);

        --n;
    }

    for_each(v.begin(), v.end(), toBinary);

    return 0;
}