#include <iostream>

using namespace std;

int main() {

    // string - compound data type
    // allows us to store multiple characters in one variable

    string a, b;

    cin >> a >> b;

    cout << "Comparing string " << a << " with string " << b << ":\n";
    cout << "a < b: " << (a < b) << endl; 
    cout << "a > b: " << (a > b) << endl; 
    cout << "a <= b: " << (a <= b) << endl; 
    cout << "a >= b: " << (a >= b) << endl; 
    cout << "a == b: " << (a == b) << endl; 
    cout << "a != b: " << (a != b) << endl; 

    return 0;
}