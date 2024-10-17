#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string s;

    cin >> s;

    s += ' ';

    char current = s[0];
    char longestPatternChar = s[0];
    int cnt = 1;
    int maxCnt = 1;

    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == current) ++cnt;
        else {
            if(cnt > maxCnt) {
                maxCnt = cnt;
                longestPatternChar = s[i - 1];
            }
            cnt = 1;
            current = s[i];
        }
    }

    cout << longestPatternChar << ' ' << maxCnt << endl;

    return 0;
}