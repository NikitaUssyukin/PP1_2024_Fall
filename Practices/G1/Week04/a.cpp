#include <iostream>

using namespace std;

int main() {

    int n; // n stores the size of the array
    cin >> n; 
    
    int a[n]; // declaring an array with identifier a and size n
    // size of the array means the amount of elements that an array can hold

    // IMPORTANT: n should be treated as a constant - your code should not change it
    // unless you explicitly intend to
    // Also, changing n does not change the size of the array after its creation

    // getting elements of the array as input from the terminal
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // outputting elements of the array
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}