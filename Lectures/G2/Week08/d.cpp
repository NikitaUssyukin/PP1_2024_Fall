#include <iostream>

using namespace std;

int a, b;

int aplusb() {
    return a + b;
}

int main() {
    cin >> a >> b;

    cout << aplusb() << endl;

    return 0;
}