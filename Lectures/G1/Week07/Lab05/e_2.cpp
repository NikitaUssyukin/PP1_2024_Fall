#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;

    cin >> n;

    string res; // empty string

    while(n > 0) {
        int rem = n % 16;
        n /= 16;
        if(rem > 9) {
            res += char('A' + rem - 10);
        }
        else {
            res += char(rem + '0');
        }
    }

    reverse(res.begin(), res.end());
    
    cout << res << endl;

    return 0;
}