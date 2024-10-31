#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v; // empty vector

    cout << v.capacity() << endl;

    v.push_back(1);

    cout << v.capacity() << endl;

    v.push_back(2);

    cout << v.capacity() << endl;

    v.push_back(3);

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    return 0;
}