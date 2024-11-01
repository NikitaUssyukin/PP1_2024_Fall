#include <iostream>
#include <set>

using namespace std;


int main() {

    set<int> s;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    set<int>::iterator it;
    // outputting a set in reverse
    for(it = --s.end(); it != --s.begin(); --it) {
        cout << *it << " ";
    }

    return 0;
}