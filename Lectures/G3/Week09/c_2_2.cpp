#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > v1; // empty 2D vector

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        vector<int> row;
        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        v1.push_back(row);
    }

    for(int i = 0; i < v1.size(); ++i) {
        for(int j = 0; j < v1[i].size(); ++j) {
            cout << v1[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
