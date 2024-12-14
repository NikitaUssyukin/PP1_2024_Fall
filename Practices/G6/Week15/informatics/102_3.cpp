#include <iostream>

using namespace std;

int main() {

    char c;
    cin >> c;

    if(isdigit(c)) cout << "yes\n";
    else cout << "no\n";

    return 0;
}