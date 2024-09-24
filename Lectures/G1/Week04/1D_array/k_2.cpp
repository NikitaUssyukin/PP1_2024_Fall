#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // n stores the size of the array;
    cin >> n;

    int a[n]; // array of size n

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // reversing the array in place
    reverse(a, a + n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}