#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }

    // address of the elements of the array
    for(int i = 0; i < n; ++i) {
        cout << a + i << " ";
    }
    cout << endl;
    

    // value of the elements of the array
    for(int i = 0; i < n; ++i) {
        cout << *(a + i) << " "; // *(a + i) is the same as a[i]
    }
    cout << endl;
    
    return 0;
}