#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > v; // empty 2D vector

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        vector<int> row;
        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << endl;
        }
        cout << endl;
    }
        
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}