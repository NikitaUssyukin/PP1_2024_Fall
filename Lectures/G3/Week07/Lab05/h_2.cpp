#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string sentence;

    getline(cin, sentence);

    sentence += ' ';

    string word;
    bool isTruth = true;
    for(int i = 0; i < sentence.size(); ++i) {
        if('0' <= sentence[i] && sentence[i] <= '9') isTruth = false;
        if(sentence[i] != ' ') word += sentence[i];
        else {
            if(isTruth) cout << word << endl;
            word.clear();
            isTruth = true;
        }
    }

    return 0;
}