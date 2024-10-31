#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v; // empty vector

    int x;
    while(cin >> x) {
        if(x == 0) break;
        v.push_back(x);
    }
        
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}