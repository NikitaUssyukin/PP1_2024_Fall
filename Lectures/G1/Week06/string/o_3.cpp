#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    string s;
    getline(cin, s);

    ss << s;

    int a, b;

    ss >> a >> b;

    cout << a + b << endl;
    
    return 0;
}