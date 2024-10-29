#include <iostream>
#include <vector>

using namespace std;

int main() {

    // using vector iterators

    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>::iterator it1;
    for(it1 = v.begin(); it1 != v.end(); ++it1) {
        cout << *it1 << ' ';
    }

    // this also works
    for(vector<int>::iterator it2 = v.begin(); it2 != v.end(); ++it2) {
        cout << *it2 << ' ';
    }

    return 0;
}