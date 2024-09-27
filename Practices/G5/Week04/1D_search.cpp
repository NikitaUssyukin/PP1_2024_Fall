#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    for(int i = 0; i < n; ++i) {
        if(a[i] == target) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "Target not found\n";

    return 0;
}