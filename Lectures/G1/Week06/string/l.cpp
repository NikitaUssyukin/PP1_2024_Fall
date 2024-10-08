#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "cat";

    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl; // does not work by deafult with KBTU computers
    cout << *(s.begin()) << endl;
    
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl; // does not work by deafult with KBTU computers
    cout << *(s.end() - 1) << endl;

    // to make it work, add the -std=c++11 flag
    
    return 0;
}