#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream ss;

    string s;

    while(getline(cin, s)) {
        ss << s << '\n';
    }
    
    cout << ss.str() << endl;

    return 0;
}