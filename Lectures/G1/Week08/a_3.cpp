#include <iostream>

using namespace std;

void aplusb(int a, int b) {
    cout << a + b << endl;
    return; // return is optional in void function
}

int main() {

    int x, y;
    cin >> x >> y;

    aplusb(x, y);

    return 0;
}