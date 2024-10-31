#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {

    vector<int> v;

    v.push_back(9);
    v.push_back(2);
    v.push_back(-22);
    v.push_back(10);
    v.push_back(5);

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;
    
    return 0;
}