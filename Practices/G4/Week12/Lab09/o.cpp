#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void vOut(vector<int> v) {
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

bool isPalindrome(vector<int> v) {
    for(int i = 0; i < v.size() / 2; ++i) {
        if(v[i] != v[v.size() - 1 - i]) return false;
    }
    return true;
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

    sort(v.begin(), v.end());

    do {
        if(isPalindrome(v)) {
            vOut(v); // function for output, not required
            return 0;
        }
    } while(next_permutation(v.begin(), v.end()));

    cout << "Impossible\n";

    return 0;
}