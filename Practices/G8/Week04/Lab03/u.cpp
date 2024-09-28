#include <iostream>

using namespace std;

int main() {
    int cnt[1001] = {};
    int n;
    cin >> n;
    int a[n+1];

    for(int i = 1; i <= n; i++) cin >> a[i];

    // cnt[1] - counter how many times number 1 appeared
    // cnt[2] - counter how many times number 2 appeared
    // cnt[3] - counter how many times number 3 appeared
    // .
    // .
    // .
    // .
    // .
    // cnt[999] - counter how many times number 999 appeared
    // cnt[1000] - counter how many times number 1000 appeared

    for(int i = 1; i <= n; i++) {
        cnt[a[i]] ++;
    }

    int mx = 0;
    for(int i = 1; i <= 1000; i++) {
        if(mx < cnt[i]) {
            mx = cnt[i];
        }
    }

    for(int i = 1000; i >= 1; i--) {
        if(cnt[i] == mx) {
            cout << i << ' ';
        }
    }

}