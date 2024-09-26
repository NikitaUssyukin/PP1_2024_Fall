#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n]; 
    
    // ERROR: outputting/using elements of the array before giving them an initial value
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}