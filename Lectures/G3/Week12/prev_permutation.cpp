#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string str;
    cin >> str;
    
    do {

        cout << str << endl;

    } while(prev_permutation(str.begin(), str.end()));

    return 0;
}