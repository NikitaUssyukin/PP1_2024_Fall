#include <iostream>

using namespace std;

int main() {

    string s = "Big cat carries a carpet";

    cout << s.find("cat") << endl; // Output: 4
    cout << s.find("car") << endl; // Output: 8
    cout << s.find("dog") << endl; // Output: 18446744073709551615 (string::npos)
    
    return 0;
}