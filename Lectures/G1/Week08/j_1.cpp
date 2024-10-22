#include <iostream>

using namespace std;

int multiplyNumBy(int num, int multiplier = 1) {
    return num * multiplier;
}

int main() {

    int a;
    cin >> a;
    
    cout << multiplyNumBy(a) << endl;
    cout << multiplyNumBy(a, 3) << endl;

    return 0;
}