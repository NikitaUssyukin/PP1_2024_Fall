#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        int x; 
        cin >> s >> x;
        if(m.count(s) == 0) {
            m[s] = x;
        } 
        else {
            m[s] += x;
        }
    }

    int l;
    cin >> l;
    for(int i = 0; i < l; i++) {
        string request; 
        cin >> request;
        if(m.count(request) == 1) {
            cout << m[request] << endl;
        } 
        else {
            cout << "No elements with key: " << request << endl;
        }
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

