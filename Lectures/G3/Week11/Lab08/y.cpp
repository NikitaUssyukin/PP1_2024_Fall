#include <iostream>
#include <stack>

using namespace std;

int main() {

    string str;
    stack<char> st;

    cin >> str;

    for(int i = 0; i < str.size(); ++i) {
        if(st.empty()) {
            st.push(str[i]);
        }
        else if(st.top() != str[i]) {
            st.push(str[i]);
        }
        else {
            st.pop();
        }
    }

    if(st.empty()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}