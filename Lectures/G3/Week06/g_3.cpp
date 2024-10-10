#include <iostream>

using namespace std;

int main() {
    freopen("g_input.txt", "r", stdin);
    // check the specified file to see the intended input

    string s1;
    string s2;

    getline(cin, s1);
    cin >> s2;

    cout << s1 << ' ' << s2 << endl;

    return 0;
}