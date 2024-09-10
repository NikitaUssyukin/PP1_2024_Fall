#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;
    
    if(a == b && b == c && c == d) {
        cout << "We have a square!\n";
    }
    else {
        cout << "This is not a square!\n";
    }
    
    return 0;
}