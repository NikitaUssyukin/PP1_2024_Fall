#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > v1; // empty 2D vector

    vector<int> row1;

    row1.push_back(1);
    row1.push_back(2);
    row1.push_back(3);

    v1.push_back(row1);
    
    vector<int> row2;

    row2.push_back(4);
    row2.push_back(5);
    row2.push_back(6);

    v1.push_back(row2);

    for(int i = 0; i < v1.size(); ++i) {
        for(int j = 0; j < v1[i].size(); ++j) {
            cout << v1[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
