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

    bool lessThanOrEqual, moreThanOrEqual, equal;

    lessThanOrEqual = (a <= b);
    moreThanOrEqual = (a >= b);
    equal = (a == b);
    
    if(equal) {
        cout << "a is equal to b\n"; 
    }
    if(lessThanOrEqual) {
        cout << "a is less than b\n"; 
    }
    if(moreThanOrEqual) {
        cout << "a is more than b\n"; 
    }
    

    return 0;
}