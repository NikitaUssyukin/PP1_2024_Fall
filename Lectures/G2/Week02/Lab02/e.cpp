#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int year;

    if(a % 4 == 0 && a % 100 != 0) {
        cout << "YES\n";
    } 
    else if(a % 400 == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}

