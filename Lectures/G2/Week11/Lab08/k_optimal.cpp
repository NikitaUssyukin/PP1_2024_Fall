#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {

    // freopen("k_input1.txt", "r", stdin);

    int n;
    cin >> n;

    vector<int> v;

    while(n > 0) {

        int x;
        cin >> x;

        v.push_back(x);

        --n;
    }    

    int maxArea = 0;
    stack<pair<int, int> > st;

    for(int i = 0; i < v.size(); ++i) {
        if(st.empty()) {
            st.push(make_pair(i, v[i]));
        }
        else if(st.top().second <= v[i]) {
            st.push(make_pair(i, v[i]));
        }
        else {
            int lastIdx = st.top().first;
            while(!st.empty() && st.top().second > v[i]) {
                int height = st.top().second;
                int width = i - st.top().first;
                int area = height * width;
                
                maxArea = max(area, maxArea);
                
                lastIdx = st.top().first;
                st.pop();
            }
            st.push(make_pair(lastIdx, v[i]));
        }
    }

    int i = v.size();

    while(!st.empty()) {
        int height = st.top().second;
        int width = i - st.top().first;
        int area = height * width;
        
        maxArea = max(area, maxArea);
        
        st.pop();
    }

    cout << maxArea << endl;

    return 0;
}