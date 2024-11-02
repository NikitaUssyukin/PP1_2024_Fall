/*
example on how to use vector together with a function
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> mutate(vector<int> v) { // pass by copy
    for(int i = 0; i < v.size(); ++i) {
        v[i] *= 2;
    }

    return v; // returns mutated copy
}

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v = mutate(v); // mutated copy assigned back to the v

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}