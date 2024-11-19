#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s;
    cin >> s;

    do {
        cout << s << endl;
    } while(prev_permutation(s.begin(), s.end()));

    return 0;
}