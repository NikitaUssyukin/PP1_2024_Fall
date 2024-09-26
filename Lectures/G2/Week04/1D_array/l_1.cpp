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

    sort(a, a + n); // sorting the whole array
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}