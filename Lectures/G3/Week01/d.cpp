#include <iostream>

using namespace std;

// arithmetic operators
// +, -, *, /, %, ++, --

int main(){
    
    // declaring variables a and b with an initial value
    int a = 0;
    int b = 0;
    // this will also work
    // int a = 0, b = 0;

    cin >> a >> b;
    /*
    will also work;
    cin >> a;
    cin >> b;
    */
    
    cout << "a + b = " << a + b << endl;

    cout << "a - b = " << a - b << endl;

    cout << "a * b = " << a * b << endl;

    cout << "a / b = " << a / b << endl;

    cout << "a % b = " << a % b << endl;

    cout << "++a = " << ++a << endl;

    cout << "--b = " << --b << endl;
    
    return 0;
}