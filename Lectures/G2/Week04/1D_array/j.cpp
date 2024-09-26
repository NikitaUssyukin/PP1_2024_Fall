#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int a[n]; 
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int index;
    cin >> index;

    // outputting the previous index element, current and next
    cout << a[index - 1] << " " << a[index] << " " << a[index + 1] << endl;
    

    return 0;
}