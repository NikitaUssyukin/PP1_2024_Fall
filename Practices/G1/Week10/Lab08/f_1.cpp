#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<char> st;

    string bracketSequence;

    cin >> bracketSequence;


    for(int i = 0; i < bracketSequence.size(); ++i) {
        if(st.empty()) {
            st.push(bracketSequence[i]);
        }
        else {
            if(st.top() == '(' && bracketSequence[i] == ')') {
                st.pop();
            }
            else {
                st.push(bracketSequence[i]);
            }
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