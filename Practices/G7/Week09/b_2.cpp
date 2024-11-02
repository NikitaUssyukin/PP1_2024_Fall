/*
example on how to use vector together with a function
*/

#include <iostream>
#include <vector>

using namespace std;

void mutate(vector<int> &v) { // pass by reference
    for(int i = 0; i < v.size(); ++i) {
        v[i] *= 2;
    }
    // does not return anything, mutates whatever vector was passed directly
}

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    mutate(v); // mutates vector v directly

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}