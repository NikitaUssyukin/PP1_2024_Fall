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

void defaultFill(vector<int> &v) { // fills the vector with 1, 2, 3
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
}

void output(vector<int> &v) { // outputs the given vector
    // can be either pass by copy or by reference - no big difference
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {

    vector<int> v;

    defaultFill(v);

    mutate(v); // mutates vector v directly

    output(v);

    return 0;
}