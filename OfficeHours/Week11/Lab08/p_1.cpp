#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

    stack<int> st;
    vector<int> v;

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

        v.push_back(st.size());        

        --n;
    }

    
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}
