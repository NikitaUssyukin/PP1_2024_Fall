#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string sentence;

    getline(cin, sentence);

    stringstream ss;

    ss << sentence;

    string word;
    while(ss >> word) {
        bool isTruth = true;
        for(int i = 0; i < word.size(); ++i) {
            if('0' <= word[i] && word[i] <= '9') {
                isTruth = false;
                break;
            }
        }
        if(isTruth) cout << word << endl;
    }

    return 0;
}