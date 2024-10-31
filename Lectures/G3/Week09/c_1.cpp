#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > v1; // empty 2D vector

    int n;
    cin >> n;
    vector<vector<int> > v2(n); // 2D vector with n empty rows

    int m;
    cin >> m;
    vector<vector<int> > v3(n, vector<int>(m)); // 2D vector with n rows and m columns

    return 0;
}
