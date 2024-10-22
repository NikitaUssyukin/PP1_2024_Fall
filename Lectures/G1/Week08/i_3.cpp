#include <iostream>

using namespace std;

void capitlize(string &str) {
    for(int i = 0; i < str.size(); ++i) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {

    string s;
    cin >> s;

    capitlize(s);
    
    cout << s << endl;

    return 0;
}