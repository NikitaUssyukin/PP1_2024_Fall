#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; 
        s.push(x);
    }
    
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}


