#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b; 
    
    if(a == b) {
        cout << "a is equal to b\n"; 
    }
    else if(a <= b) {
        cout << "a is less than or equal b\n"; 
    }
    else if(a >= b) {
        cout << "a is more than or equal b\n"; 
    }

    return 0;
}