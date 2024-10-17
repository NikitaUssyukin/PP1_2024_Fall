#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string s;

    cin >> s;

    char current = s[0];
    char longestPatternChar = s[0];
    int cnt = 1;
    int maxCnt = 1;

    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == current) ++cnt;
        else {
            current = s[i];
            cnt = 1;
        }
        if(cnt > maxCnt) {
            maxCnt = cnt;
            longestPatternChar = s[i - 1];
        }
    }

    cout << longestPatternChar << ' ' << maxCnt << endl;

    return 0;
}