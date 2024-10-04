/*
5
20 30 40 2 4

Possible pairs of distinct numbers:

20 30
20 40
20 2
20 4

30 40
30 2
30 4

40 2
40 4

2 4

Pairs in terms of elements of this array:
a[0] a[1]
a[0] a[2]
a[0] a[3]
a[0] a[4]

a[1] a[2]
a[1] a[3]
a[1] a[4]

a[2] a[3]
a[2] a[4]

a[3] a[4]
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxGcd = 1;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            // cout << a[i] << ' ' << a[j] << endl;
            int gcd = min(a[i], a[j]);
            while(gcd > 1) {
                if(a[i] % gcd == 0 && a[j] % gcd == 0) {
                    break;
                }
                else {
                    --gcd;
                }
            }
            maxGcd = max(maxGcd, gcd);
        }
    }

    cout << maxGcd << endl;

    return 0;
}