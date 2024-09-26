#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }

    // address of the first element in the array
    cout << a << endl;

    // value of the first element in the array
    cout << *a << endl;
    
    return 0;
}