#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v; // empty vector

    cout << v.empty() << endl;
    cout << v.size() << endl;

    v.push_back(1);

    cout << v.empty() << endl;
    cout << v.size() << endl;

    return 0;
}