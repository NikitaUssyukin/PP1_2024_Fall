#include <iostream>

using namespace std;

string capitlize(string str) {
    string res;

    for(int i = 0; i < str.size(); ++i) {
        if('a' <= str[i] && str[i] <= 'z') {
            res += str[i] - 32;
        }
        else {
            res += str[i];
        }
    }

    return res;
}

int main() {

    string s;
    cin >> s;

    s = capitlize(s);
    
    cout << s << endl;

    return 0;
}