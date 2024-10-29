#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(3);

    v.erase(v.begin() + 1); // erases the 2nd element
    // v.erase(v.begin() + i); - erases the (i + 1)th element
    // or element with the index i

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    cout << v.empty() << endl;

    v.erase(v.begin(), v.end()); // erases the whole vector
    // same as v.clear()

    cout << v.empty() << endl;

    return 0;
}