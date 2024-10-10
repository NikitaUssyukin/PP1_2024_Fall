#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int maxSum = 0;
    for(int i = 0; i < n; ++i) { // this loop goes over the rows
        int sum = 0;
        for(int j = 0; j < m; ++j) { // this loop goes over individual elements of the row
            sum += a[i][j];
        }
        if(maxSum < sum) maxSum = sum;
    }

    cout << maxSum << endl;
    

    return 0;
}