#include <iostream>

using namespace std;

bool isEven(int a) {
    return !(a % 2);
}

int main() {

    int x;
    cin >> x;

    if(isEven(x)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}