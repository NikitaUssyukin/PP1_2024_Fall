#include <iostream>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // error example when using getline
    // see input.txt for input

    string s1;
    string s2;
    
    getline(cin, s1); 
    cin >> s2;

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}