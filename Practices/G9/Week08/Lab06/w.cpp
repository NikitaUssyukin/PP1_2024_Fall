#include <iostream>
#include <sstream>

using namespace std;

int findNthNumber(int cnt[], int X) {
    int missing_num = 1;

    for(int i = 1; i < 1001; ++i) {
        if(cnt[i] == 1) continue;
        if(missing_num == X) return i;
        ++missing_num;
    }

    return -1;
}

int main() {

    stringstream ss;

    string s;

    getline(cin, s);

    ss << s;

    int cnt[1001] = {};

    int temp;
    while(ss >> temp) {
        ++cnt[temp];
    }

    int X;
    cin >> X;

    cout << findNthNumber(cnt, X) << endl;

    return 0;
}