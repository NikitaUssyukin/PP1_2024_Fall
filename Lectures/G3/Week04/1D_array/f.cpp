#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n]; 

    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // output only the elements with even indexes
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}