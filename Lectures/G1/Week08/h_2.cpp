#include <iostream>

using namespace std;

int aplusb(int a, int b) {
    return a + b;
}

int main() {

    char a, b;
    cin >> a >> b;
    
    cout << aplusb(a, b) << endl;

    return 0;
}