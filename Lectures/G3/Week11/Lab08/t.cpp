#include <iostream>
#include <stack>

using namespace std;

int main() {

    // freopen("t_input.txt", "r", stdin);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int d;
        cin >> d;

        stack<int> st;

        while(d > 0) {
            int bit = d % 2;
            d /= 2;
            if(st.empty() || !(st.top() == 0 && bit == 1)) {
                st.push(bit);
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
    }

    

    return 0;
}