#include <iostream>
#include <vector>

using namespace std;

int main() {

    // 2D vector

    vector<vector<int> > v1; // empty 2D vector

    

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        vector<int> row;
        for(int j = 0; j < m; ++j) {
            int temp;
            cin >> temp;
            row.push_back(temp);
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