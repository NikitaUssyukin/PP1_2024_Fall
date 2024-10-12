#include <iostream>

using namespace std;

int main() {

    int cnt[10] = {}; // counter array for numbers 0-9

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        ++cnt[a[i]]; 
        /*
        e.g. 
        for this input:
        5
        1 2 3 4 5

        cnt[a[0]] -> cnt[1]
        */  
    }

    int modeIndex = 0;

    for(int i = 1; i < 10; ++i) {
        if(cnt[modeIndex] < cnt[i]) modeIndex = i;
    }

    cout << modeIndex << endl;

    return 0;
}

