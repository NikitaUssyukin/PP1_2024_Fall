#include <iostream>

using namespace std;

int aplusb(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << aplusb(x, y) << endl;

    return 0;
}