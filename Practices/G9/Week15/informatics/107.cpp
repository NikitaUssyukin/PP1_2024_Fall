#include <iostream>

using namespace std;

int main() {

    string s;
    string longest = "";

    while(cin >> s) {
        if(s.length() > longest.length()) longest = s;
    }

    cout << longest << endl;
    cout << longest.length() << endl;

    return 0;
}