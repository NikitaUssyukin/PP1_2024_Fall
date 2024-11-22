#include <iostream>
#include <vector>

using namespace std;

void vOut(const vector<int> &v) {
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {

    vector<int> v;
    
    for(int i = 1; i <= 5; ++i) {
        v.push_back(i);
    }

    vOut(v);

    v.resize(1);

    vOut(v);

    v.resize(5);

    vOut(v);

    return 0;
}