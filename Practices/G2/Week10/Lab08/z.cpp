#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<char> s1;
    stack<char> s2;

    string str1, str2;

    cin >> str1 >> str2;

    for(int i = 0; i < str1.size(); ++i) {
        if(str1[i] == '#') {
            if(s1.empty()) continue;
            s1.pop();
        }
        else {
            s1.push(str1[i]);
        }
    }

    for(int i = 0; i < str2.size(); ++i) {
        if(str2[i] == '#') {
            if(s2.empty()) continue;
            s2.pop();
        }
        else {
            s2.push(str2[i]);
        }
    }

    cout << (s1 == s2) << endl;

    return 0;
}