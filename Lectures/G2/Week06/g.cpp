#include <iostream>

using namespace std;

int main() {
    string s = "parrot";

    // ways to access the first element
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl; // does not work by deafult with KBTU computers
    cout << *s.begin() << endl;
    
    // ways to access the last element
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl; // does not work by deafult with KBTU computers
    cout << *(s.end() - 1) << endl;

    // to make front() or back() work, add the -std=c++11 flag

    return 0;
}