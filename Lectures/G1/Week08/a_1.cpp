#include <iostream>

using namespace std;

int aplusb(int a, int b) {
    int c = a + b;
    return c;
}

int main() {

    int x, y;
    cin >> x >> y;

    cout << aplusb(x, y) << endl;

    return 0;
}