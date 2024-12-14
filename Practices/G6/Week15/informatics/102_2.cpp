#include <iostream>

using namespace std;

int main() {

    char c;
    cin >> c;

    if('0' <= c && c <= '9') cout << "yes\n";
    else cout << "no\n";

    return 0;
}