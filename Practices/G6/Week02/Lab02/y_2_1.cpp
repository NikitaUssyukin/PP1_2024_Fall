#include <iostream>

using namespace std;

int main() {

    int a; // day
    int b; // month
    int c; // year

    cin >> a >> b >> c;

    bool validDate = false;

    if((1 <= a && a <= 31) && (1 <= b && b <= 12)) {
        if(b == 2 && a > 29) {
            validDate = false;
        }
        else if(b == 2 && a == 29) {
            if((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0)) {
                validDate = true;
            }
        }
        else if(a == 31) {
            if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
                validDate = true;
            }
        } 
        else {
            validDate = true;
        }
    }

    if(validDate) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }

    return 0;
}