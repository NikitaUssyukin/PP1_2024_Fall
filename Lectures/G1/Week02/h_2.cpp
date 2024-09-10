#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;
    
    if(a == b) {
        if(b == c) {
            if(c == d) {
                cout << "We have a square!\n";
            }
            else {
                cout << "This is not a square!\n";
            }
        }
        else {
            cout << "This is not a square!\n";
        }
    }
    else {
        cout << "This is not a square!\n";
    }
    
    return 0;
}