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

    bool result;

    result = (a < b);
    cout << a << " < " << b << " : " << result << endl;

    result = (a <= b);
    cout << a << " <= " << b << " : " << result << endl;

    result = (a > b);
    cout << a << " > " << b << " : " << result << endl;

    result = (a >= b);
    cout << a << " >= " << b << " : " << result << endl;

    result = (a == b);
    cout << a << " == " << b << " : " << result << endl;

    result = (a != b);
    cout << a << " != " << b << " : " << result << endl;
    
    return 0;
}