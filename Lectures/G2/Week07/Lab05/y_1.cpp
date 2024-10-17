#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    string vowels = "aeiou";

    int cnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(vowels.find(s[i]) != string::npos) ++cnt;
    }

    cout << cnt << endl;

    return 0;
}