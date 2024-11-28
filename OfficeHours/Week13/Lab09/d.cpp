#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main() {

    string str;
    cin >> str;

    stack<char> st;

    for(int i = 0; i < str.size(); ++i) {
        if(st.empty()) st.push(str[i]);
        else {
            int num = (st.top() - '0') * 10 + str[i] - '0';
            // '0' - '0' == 0
            // '1' - '0' == 1
            // '2' - '0' == 2   
            int root = sqrt(num);
            if(root * root == num) st.pop();
            else st.push(str[i]);
        }
    }

    if(st.empty()) {
        cout << "Stack is empty\n";
    }
    else {
        while(!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}

