#include <iostream>
#include <sstream>

using namespace std;

int main() {
    
    stringstream ss;

    string s = "123 456";

    ss << s;

    int a, b;

    ss >> a >> b;

    cout << a << ' ' << b;

    return 0;
}