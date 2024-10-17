// example of how to take an "infinite" 2D array
// from input using stringstream

// array with variable length of rows
// and stores only positive numbers

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s;

    int a[100][100] = {};

    int n = 0;
    int m = 0;
    int max_m = 0;

    while(getline(cin, s)) {
        stringstream ss;
        ss << s;
        int temp;
        while(ss >> temp) {
            a[n][m] = temp;
            ++m;
            // cout << "filling array\n";
        }
        a[n][m] = -1; // marks the end of row
        ++n;
        max_m = max(max_m, m);
        m = 0;
    }
    
    // cout << n << ' ' << m << endl;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < max_m; ++j) {
            if(a[i][j] == -1) break;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}