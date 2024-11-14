#include <iostream>
#include <stack>

using namespace std;


int main() {

    int q;
    cin >> q;

    stack<int> st;
    stack<int> maxVals;

    while(q > 0) {
        
        string request;
        cin >> request;

        if(request == "add") {
            int x;
            cin >> x;
            st.push(x);
            if(maxVals.empty() || maxVals.top() <= x) maxVals.push(x);
        }
        else if(request == "delete") {
            if(!st.empty()) {
                int elementToPop = st.top();
                if(!maxVals.empty() && maxVals.top() == elementToPop) maxVals.pop();
                st.pop();
            }
        }
        else if(request == "getmax") {
            if(!maxVals.empty()) {
                cout << maxVals.top() << endl;
            }
            else {
                cout << "error" << endl;
            }
        }
        else if(request == "getcur") {
            if(!st.empty()) {
                cout << st.top() << endl;
            }
            else {
                cout << "error" << endl;
            }
        }

        --q;
    }

    return 0;
}