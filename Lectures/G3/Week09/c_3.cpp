#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int> > v2(n); // 2D vector with n empty rows


    for(int i = 0; i < v2.size(); ++i) {  
        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            v2[i].push_back(x);
        }
    }

    for(int i = 0; i < v2.size(); ++i) {
        for(int j = 0; j < v2[i].size(); ++j) {
            cout << v2[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
