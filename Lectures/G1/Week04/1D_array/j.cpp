#include <iostream>

using namespace std;

int main() {

    int n; // n stores the size of the array;
    cin >> n;

    int a[n]; // array of size n

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // reverse the output

    for(int i = n - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}