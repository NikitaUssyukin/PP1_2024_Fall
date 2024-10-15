#include <iostream>

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

    for(int i = res.size() - 1; i >= 0; --i) {
        cout << res[i];
    }
    cout << endl;

    return 0;
}