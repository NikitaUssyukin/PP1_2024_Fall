#include <iostream>
#include <algorithm>
// <algotithm> is needed for:
// sort()
// reverse()

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n];  
    

    for(int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

    sort(a + 1, a + n - 1); // sorting the part of the array, indexes [1; n - 1)
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}