#include <iostream>

using namespace std;

int main() {

    string s;

    getline(cin, s); // takes all input up to a newline character; 
    // does not stop when encounters a space

    cout << s << endl;

    return 0;
}