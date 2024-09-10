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

    bool lessThan, moreThan, equal;

    lessThan = (a < b);
    moreThan = (a > b);
    equal = (a == b);
    
    if(lessThan) {
        cout << "a is less than b\n"; 
    }
    if(moreThan) {
        cout << "a is more than b\n"; 
    }
    if(equal) {
        cout << "a is equal to b\n"; 
    }

    return 0;
}