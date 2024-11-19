#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

bool isEven(int a) {
    return a % 2 == 0;
}

int main() {

    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << count_if(s.begin(), s.end(), isEven);

    return 0;
}