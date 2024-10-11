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

    cout << "coordinates of min elements:\n";

    int sum = 0;

    for(int j = 0; j < m; ++j) { // outer loop goes over j
        int min_i = 0;
        int min_j = j;
        for(int i = 0; i < n; ++i) { // inner loop goes over i
            if(a[min_i][min_j] > a[i][j]) {
                min_i = i;
            }
        }
        sum += a[min_i][min_j];
        cout << min_i + 1 << ';' << min_j + 1 << endl;
    }

    cout << "\nTheir sum:\n" << sum << endl; 

    return 0;
}