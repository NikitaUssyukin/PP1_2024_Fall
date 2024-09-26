#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n];  
    
    // outputting addresses of the array
    for(int i = 0; i < n; ++i) {
        cout << a + i << " ";
    }

    for(int i = 0; i < n; ++i) {
        cin >> *(a + i); // *(a + i) is the same as a[i]
    }

    // outputting elements of the array using addresses
    for(int i = 0; i < n; ++i) {
        cout << *(a + i) << " ";
    }

    return 0;
}