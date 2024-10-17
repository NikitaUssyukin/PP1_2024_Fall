#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    string vowels = "aeiou";

    int cnt = 0;

    for(int i = 0; i < s.size(); ++i) {
        for(int j = 0; j < vowels.size(); ++j) {
            if(s[i] == vowels[j]) ++cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}