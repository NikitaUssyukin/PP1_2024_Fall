#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b; 

    /*
    comparison operators
    <  - less than
    <= - less than or equal
    >  - greater than
    >= - greater than or equal
    == - equal
    != - not equal
    */

    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    
    return 0;
}