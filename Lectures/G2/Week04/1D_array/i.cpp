#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n]; 
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // doubling all the elements
    for(int i = 0; i < n; ++i) {
        a[i] *= 2; // same as: a[i] = a[i] * 2; 
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}