#include <iostream>

using namespace std;

int main() {

    int a; // day
    int b; // month
    int c; // year

    cin >> a >> b >> c;

    if((1 <= a && a <= 31) && (1 <= b && b <= 12)) {
        if(b == 2 && a > 29) {
            cout << "no\n";
        }
        else if(b == 2 && a == 29) {
            if((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0)) {
                cout << "yes\n";
            }
            else {
                cout << "no\n";
            }
        }
        else if(a == 31) {
            if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
                cout << "yes\n";
            }
            else {
                cout << "no\n";
            }
        } 
        else {
            cout << "yes\n";
        }
    }
    else {
        cout << "no\n";
    }

    return 0;
}