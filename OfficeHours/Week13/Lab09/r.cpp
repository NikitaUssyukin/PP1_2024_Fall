#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num = 0;

int gen() {
    return ++num;
}

int main() {

    int n;
    cin >> n;

    vector<int> v(n);

    generate(v.begin(), v.end(), gen);

    int k;
    cin >> k;

    int cnt = 0;

    do {
        int fixedCnt = 0;
        for(int i = 0; i < v.size(); ++i) {
            if(i + 1 == v[i]) ++fixedCnt; 
        } 

        if(fixedCnt == k) ++cnt;

    } while (next_permutation(v.begin(), v.end()));

    cout << cnt << endl;

    return 0;
}