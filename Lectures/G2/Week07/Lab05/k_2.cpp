#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if(s1 == s2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}