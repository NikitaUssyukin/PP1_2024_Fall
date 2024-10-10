#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    string s = "123 456";

    ss << s;

    cout << ss.str() << endl;

    int a, b;

    ss >> a >> b;

    cout << a << ' ' << b << endl;
    cout << a + b << endl;

    return 0;
}