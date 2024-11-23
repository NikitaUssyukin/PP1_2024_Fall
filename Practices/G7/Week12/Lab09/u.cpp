#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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


    vector<int> v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());

    if(v == v_sorted) {
        cout << "YES\n";
        return 0;
    }

    for(int i = 0; i < v.size(); ++i) {
        for(int j = i + 1; j < v.size(); ++j) {
            swap(v[i], v[j]);
            if(v == v_sorted) {
                cout << "YES\n";
                return 0;
            }
            swap(v[i], v[j]);
        }
    }

    cout << "NO\n";

    return 0;
}