#include <iostream>

using namespace std;

int main() {

    int n; // n stores the size of the array;
    cin >> n;

    int a[n]; // array of size n

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}