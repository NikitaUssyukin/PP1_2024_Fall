#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// comparator
// allows us to specify how to compare elements of a container
// cmp1 and cmp2 specify sorting in descending order - from larger to smaller
bool cmp1(int a, int b) {
    if(a > b) return true;
    return false;
}

bool cmp2(int a, int b) {
    return a > b;
}

int main() {

    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(3);

    sort(v.begin(), v.end(), cmp1);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}