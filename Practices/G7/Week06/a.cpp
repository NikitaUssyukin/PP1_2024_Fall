#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    string s;

    getline(cin, s);

    ss << s;

    string result;

    while(ss >> s) {
        bool isTruth = true;
        for(int i = 0; i < s.size(); ++i) {
            if('0' <= s[i] && s[i] <= '9') {
                isTruth = false;
                break;
            }
        }
        if(isTruth) cout << s << endl;
    }

    return 0;
}