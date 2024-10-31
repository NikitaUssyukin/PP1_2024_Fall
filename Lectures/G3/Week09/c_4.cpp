#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int> > v3(n, vector<int>(m)); // 2D vector with n rows and m columns


    for(int i = 0; i < v3.size(); ++i) {  
        for(int j = 0; j < v3[i].size(); ++j) {
            cin >> v3[i][j];
        }
    }

    for(int i = 0; i < v3.size(); ++i) {
        for(int j = 0; j < v3[i].size(); ++j) {
            cout << v3[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
