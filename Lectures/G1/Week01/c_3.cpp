#include <iostream> 

using namespace std; 

/*
arithmetic operators
+ addition
- subtraction
* multiplication
/ division
% modulo
*/

int main() { 

    // variable declaration
    int a, b;

    // taking input from the terminal
    cin >> a >> b;

    cout << "Addition:\n"; // \n is the newline character
    cout << a + b << endl;

    cout << "Subtraction:\n";
    cout << a - b << endl;

    cout << "Multiplication:\n";
    cout << a * b << endl;

    cout << "Division:\n";
    cout << a / b << endl;

    cout << "Modulo:\n";
    cout << a % b << endl;

    return 0;
}