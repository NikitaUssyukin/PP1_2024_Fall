#include <iostream>
#include <stack>

using namespace std;

int main() {

    // freopen("p_input.txt", "r", stdin);

    stack<int> st;

    int n;
    cin >> n;

    while(n > 0) {

        int wizard;
        cin >> wizard;

        if(st.empty()) {
            st.push(wizard);
        }
        else if(st.top() > wizard) {
            st.push(wizard);
        }
        else {
            while(!st.empty() && st.top() <= wizard) {
                st.pop();
            }
            st.push(wizard);
        } 

        cout << st.size() << ' ';

        --n;
    }

    cout << endl;

    return 0;
}
