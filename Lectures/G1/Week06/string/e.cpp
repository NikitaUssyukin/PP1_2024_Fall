#include <iostream>

using namespace std;

int main() {

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