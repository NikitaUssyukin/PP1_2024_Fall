#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << *v.begin() << endl;
    
    cout << v[v.size() - 1] << endl;
    cout << v.at(v.size() - 1) << endl;
    cout << v.back() << endl;
    cout << *(v.end() - 1) << endl;

    return 0;
}