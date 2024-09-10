#include <iostream>

using namespace std;

int main() {

    bool a = true;

    /*
    logical operators
    || - or
    && - and
    ! - not
    */

    a = (true || false) && (!false) && (true);

    cout << a << endl;
    
    return 0;
}