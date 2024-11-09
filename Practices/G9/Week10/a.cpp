#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main() {

    set<int> s;

    int n;
    cin >> n;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    vector<int> v(s.begin(), s.end());

    for(int i = 1; i < v.size() - 1; ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}