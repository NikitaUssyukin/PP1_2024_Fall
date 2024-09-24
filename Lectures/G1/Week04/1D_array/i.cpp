#include <iostream>

using namespace std;

int main() {

    int n; // n stores the size of the array;
    cin >> n;

    int a[n]; // array of size n

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // searching

    int target;
    cin >> target;

    for(int i = 0; i < n; ++i) {
        if(a[i] == target) {
            cout << target << " found at index " << i << endl;
            return 0;
        }
    }
    cout << target << " not found" << endl;

    return 0;
}