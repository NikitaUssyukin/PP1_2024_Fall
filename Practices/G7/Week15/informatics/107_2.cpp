#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    stringstream ss;
    ss << s;

    string longest = "";

    while(ss >> s) {
        if(s.length() > longest.length()) longest = s;
    }

    cout << longest << endl;
    cout << longest.length() << endl;

    return 0;
}