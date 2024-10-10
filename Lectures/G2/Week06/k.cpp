#include <iostream>

using namespace std;

int main() {
    
    string s = "Cat carries a carpet";

    cout << s.find("Cat") << endl;
    cout << s.find("cat") << endl;
    cout << s.find("car") << endl;
    cout << s.find("dog") << endl;

    // find returns the index where th substring starts in the original string
    // otherwise returns string::npos

    return 0;
}