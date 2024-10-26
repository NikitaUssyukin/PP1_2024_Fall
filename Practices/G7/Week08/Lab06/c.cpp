#include <iostream>

using namespace std;

int countPairs(int a[], int b[], int n) {
    int pairsCnt = 0;

    int a_cnt[101] = {};
    int b_cnt[101] = {};

    for(int i = 0; i < n; ++i) {
        ++a_cnt[a[i]];
        ++b_cnt[b[i]];
    }

    for(int i = 1; i < 101; ++i) {
        pairsCnt += min(a_cnt[i], b_cnt[i]);
    }

    return pairsCnt;
}

int main() {

    int n;
    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << countPairs(a, b, n) << endl;

    return 0;
}