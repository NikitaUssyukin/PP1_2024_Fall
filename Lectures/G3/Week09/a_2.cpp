#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    cout << v.empty() << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(1);
    cout << v.capacity() << endl;

    v.push_back(2);
    cout << v.capacity() << endl;

    v.push_back(3);
    cout << v.capacity() << endl;

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}