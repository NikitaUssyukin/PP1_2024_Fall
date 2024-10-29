#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v; // empty vector

    cout << v.empty() << endl;
    cout << v.size() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v.empty() << endl;
    cout << v.size() << endl;

    cout << v[0] << ' ';
    cout << v[1] << ' ';
    cout << v[2] << endl;

    return 0;
}