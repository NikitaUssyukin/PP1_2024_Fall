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

    // output the element with the previous index, current index and next index
    if(0 <= index && index < n) { // indexes in the array must stay within [0; n)
        cout << a[index - 1] << " " << a[index] << " " << a[index + 1] << endl;
    }
    else {
        cout << "No such index!\n";
    }
    

    return 0;
}