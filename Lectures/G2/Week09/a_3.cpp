#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n); // vector with n elements

    cout << v.size() << endl;

    for(int i = 0; i < n; ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}